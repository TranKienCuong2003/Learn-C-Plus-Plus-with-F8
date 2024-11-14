#include <iostream>

int sum(int &a, int &b) {
    int c = a + b;
    return c;
}

int main() { 
    int a, b;

    std::cout << "Nhap so thu nhat: ";
    std::cin >> a;

    std::cout << "Nhap so thu hai: ";
    std::cin >> b;

    std::cout << "Tong cua hai so la: " << sum(a, b) << std::endl;

    return 0;
}
