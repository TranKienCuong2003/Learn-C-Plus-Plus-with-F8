#include <iostream>

int main() {
    float a, b;

    std::cout << "Nhap gia tri cho so thu nhat: ";
    std::cin >> a;

    std::cout << "Nhap gia tri cho so thu hai: ";
    std::cin >> b;

    float c = a + b;
    float d = a - b;
    float e = a / b;

    std::cout << a << " + " << b << " = " << c << std::endl;
    std::cout << a << " - " << b << " = " << d << std::endl;
    std::cout << a << " / " << b << " = " << e << std::endl;

    return 0;
}
