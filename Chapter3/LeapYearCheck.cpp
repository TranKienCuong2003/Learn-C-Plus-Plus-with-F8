#include <iostream>
#include <limits>

int main() {
    int year;

    std::cout << "Nhap vao mot nam: ";

    while (true) {
        std::cin >> year;

        if (std::cin.fail()) {
            std::cout << "Loi: Vui long nhap mot so nguyen!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Nhap vao mot nam: ";
        } else {
            break;
        }
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << year << " la nam nhuan" << std::endl;
    } else {
        std::cout << year << " khong phai la nam nhuan" << std::endl;
    }

    return 0;
}
