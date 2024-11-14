#include <iostream>

unsigned long long factor(int n) { 
    if (n == 1) { 
        return 1; 
    } 
    return n * factor(n - 1); 
}

int main() { 
    int n;

    std::cout << "Nhap mot so nguyen duong de tinh giai thua: ";
    std::cin >> n;

    std::cout << "Giai thua cua " << n << " la: " << factor(n) << std::endl;

    return 0;
}
