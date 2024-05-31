#include <iostream>

int main() {
    int i = 1;

    // Print numbers from 1 to 5
    do {
        std::cout << i << " ";
        i++;
    } while (i <= 5);
    std::cout << std::endl;
    return 0;
}
