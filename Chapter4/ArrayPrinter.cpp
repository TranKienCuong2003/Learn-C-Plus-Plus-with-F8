#include <iostream>

int main() {
    int numbers[4] = { 1, 2, 3, 4 };

    std::cout << "Mang duoc in ra la: ";
    for (int i = 0; i < 4; i++) {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
