#include <iostream>

int main() {
    int age;

    std::cout << "Nhap tuoi cua ban: ";
    std::cin >> age;

    bool ktra = age >= 18;

    if (ktra) {
        std::cout << "Ban la nguoi truong thanh." << std::endl;
    } else {
        std::cout << "Ban chua du 18 tuoi." << std::endl;
    }

    return 0;
}
