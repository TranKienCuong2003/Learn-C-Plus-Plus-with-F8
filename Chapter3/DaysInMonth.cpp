#include <iostream>
#include <limits>

int main() {
    int year, month;

    std::cout << "Nhap nam: ";
    while (true) {
        std::cin >> year;
        if (std::cin.fail() || year < 1) {
            std::cout << "Loi: Vui long nhap nam hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::cout << "Nhap thang (1 - 12): ";
    while (true) {
        std::cin >> month;
        if (std::cin.fail() || month < 1 || month > 12) {
            std::cout << "Loi: Vui long nhap thang hop le (1 - 12): ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    bool isLeapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout << "Thang " << month << " nam " << year << " co 31 ngay" << std::endl;
            break;
        case 4: case 6: case 9: case 11:
            std::cout << "Thang " << month << " nam " << year << " co 30 ngay" << std::endl;
            break;
        case 2:
            if (isLeapYear) {
                std::cout << "Thang " << month << " nam " << year << " co 29 ngay" << std::endl;
            } else {
                std::cout << "Thang " << month << " nam " << year << " co 28 ngay" << std::endl;
            }
            break;
        default:
            std::cout << "Thang khong hop le" << std::endl;
    }

    return 0;
}
