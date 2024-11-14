#include <iostream>
#include <limits>

int main() {
    int month;

    std::cout << "Nhap so thang (1 - 12): ";
    while (true) {
        std::cin >> month;
        if (std::cin.fail() || month < 1 || month > 12) {
            std::cout << "Loi: Vui long nhap so thang hop le (1 - 12): ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout << "Thang " << month << " co 31 ngay" << std::endl;
            break;
        case 2:
            std::cout << "Thang 2 co 28 ngay" << std::endl;
            break;
        case 4: case 6: case 9: case 11:
            std::cout << "Thang " << month << " co 30 ngay" << std::endl;
            break;
        default:
            std::cout << "Thang khong hop le" << std::endl;
    }

    return 0;
}
