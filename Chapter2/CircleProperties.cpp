#include <iostream>

const float PI = 3.14;

int main() {
    float r;

    std::cout << "Nhap ban kinh hinh tron (m): ";
    std::cin >> r;

    std::cout << "Chu vi hinh tron la: " << 2 * r * PI << std::endl;
    std::cout << "Dien tich hinh tron la: " << r * r * PI << std::endl;

    return 0;
}
