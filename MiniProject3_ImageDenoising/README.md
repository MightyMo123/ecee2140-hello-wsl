Mini Project 3 – Image Denoising
EECE 2140 – Mohamed Hagyousif

How to build:
g++ src/denoise.cpp -o denoise

How to run:
./denoise tests/test1.txt output.txt 1

Design choices:
I used a 3x3 mean filter to smooth noise.
Borders were ignored and copied unchanged.
All values were clamped between 0 and 255.

Copilot usage:
Copilot helped me with file reading loops and debugging indexing.
I checked the math and filter logic myself.
One bug Copilot missed was an off-by-one error in the loops, which I fixed.