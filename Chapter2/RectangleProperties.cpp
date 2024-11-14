#include <iostream>

int main() {
    float chieu_dai, chieu_rong;

    std::cout << "Nhap chieu dai cua hinh chu nhat (m): ";
    std::cin >> chieu_dai;

    std::cout << "Nhap chieu rong cua hinh chu nhat (m): ";
    std::cin >> chieu_rong;

    std::cout << "Chu vi hinh chu nhat la: " << (chieu_dai + chieu_rong) * 2 << std::endl;
    std::cout << "Dien tich hinh chu nhat la: " << (chieu_dai * chieu_rong) << std::endl;

    return 0;
}
