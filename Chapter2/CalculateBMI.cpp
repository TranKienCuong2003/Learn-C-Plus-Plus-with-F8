#include <iostream>

int main() {
    float can_nang, chieu_cao;

    std::cout << "Nhap can nang (kg): ";
    std::cin >> can_nang;

    std::cout << "Nhap chieu cao (m): ";
    std::cin >> chieu_cao;

    float c = chieu_cao * chieu_cao;
    float d = can_nang / c;

    std::cout << "BMI = " << d << std::endl;

    if (d < 18.5) {
        std::cout << "Ban dang bi gay." << std::endl;
    } else if (d >= 18.5 && d <= 24.9) {
        std::cout << "Ban co chi so BMI binh thuong." << std::endl;
    } else if (d >= 25 && d <= 29.9) {
        std::cout << "Ban bi thua can." << std::endl;
    } else {
        std::cout << "Ban bi beo phi." << std::endl;
    }

    return 0;
}
