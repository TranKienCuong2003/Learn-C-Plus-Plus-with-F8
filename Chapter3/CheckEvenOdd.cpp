#include <iostream>
#include <limits>

int main() {
    float a;

    std::cout << "Nhap mot so nguyen: ";

    while (true) {
        std::cin >> a;

        if (std::cin.fail() || a != static_cast<int>(a)) {
            std::cout << "Loi: Vui long nhap mot so nguyen!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Nhap mot so nguyen: ";
        } else {
            break;
        }
    }

    int aInt = static_cast<int>(a);

    if (aInt % 2 == 0) {
        std::cout << aInt << " la so chan" << std::endl;
    } else {
        std::cout << aInt << " la so le" << std::endl;
    }

    return 0;
}
