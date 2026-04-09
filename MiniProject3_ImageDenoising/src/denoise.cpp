#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int clamp(int val){
    if(val < 0) return 0;
    if(val > 255) return 255;
    return val;
}

vector<vector<int>> loadImage(string filename,int &rows,int &cols){
    ifstream in(filename);
    in >> rows >> cols;

    vector<vector<int>> img(rows, vector<int>(cols));

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            in >> img[i][j];

    return img;
}

void saveImage(string filename, vector<vector<int>> img){
    ofstream out(filename);

    int rows = img.size();
    int cols = img[0].size();

    out << rows << " " << cols << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            out << img[i][j] << " ";
        out << endl;
    }
}

vector<vector<int>> meanFilter(vector<vector<int>> img){
    int rows = img.size();
    int cols = img[0].size();

    vector<vector<int>> result = img;

    for(int i=1;i<rows-1;i++){
        for(int j=1;j<cols-1;j++){

            int sum = 0;

            for(int di=-1;di<=1;di++)
                for(int dj=-1;dj<=1;dj++)
                    sum += img[i+di][j+dj];

            result[i][j] = clamp(sum/9);
        }
    }
    return result;
}

int main(int argc,char* argv[]){
    if(argc < 4){
        cout<<"Usage: denoise input.txt output.txt iterations\n";
        return 1;
    }

    string input = argv[1];
    string output = argv[2];
    int iter = stoi(argv[3]);

    int rows,cols;
    auto img = loadImage(input,rows,cols);

    for(int k=0;k<iter;k++)
        img = meanFilter(img);

    saveImage(output,img);

    cout<<"Done!\n";
}
