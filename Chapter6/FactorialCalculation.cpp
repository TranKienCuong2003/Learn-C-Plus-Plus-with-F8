#include <iostream>

unsigned long long factor(int &n) { 
    int factor = 1;
    for (int i = 1; i <= n; i++) {
        factor = factor * i;
    }
    return factor;
}

int main() { 
    int n;

    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Giai thua khong ton tai cho so am!" << std::endl;
    } else {
        std::cout << "Giai thua cua " << n << " la: " << factor(n) << std::endl;
    }

    return 0;
}
