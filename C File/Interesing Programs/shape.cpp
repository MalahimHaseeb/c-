#include <iostream>

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int width = 10;
    int height = 5;
    drawRectangle(width, height);

    return 0;
}
