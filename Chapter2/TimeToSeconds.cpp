#include <iostream>

int main() {
    int days, hours, minutes, seconds;

    std::cout << "Nhap so ngay: ";
    std::cin >> days;

    std::cout << "Nhap so gio: ";
    std::cin >> hours;

    std::cout << "Nhap so phut: ";
    std::cin >> minutes;

    std::cout << "Nhap so giay: ";
    std::cin >> seconds;

    float Tong = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;

    std::cout << "Tong so giay la: " << Tong << std::endl;

    return 0;
}
