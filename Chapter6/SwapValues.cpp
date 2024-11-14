#include <iostream>

void swap(int a , int b) { }

int main() { 
    int a, b;

    std::cout << "Nhap gia tri cua a: ";
    std::cin >> a;
    
    std::cout << "Nhap gia tri cua b: ";
    std::cin >> b;

    swap(a, b);

    std::cout << "Gia tri cua b va a sau khi hoan doi: " << b << " " << a << std::endl;

    return 0;
}
