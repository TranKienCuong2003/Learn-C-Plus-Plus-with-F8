#include <iostream>
#include <math.h>

bool is_prime(int n) {
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem += 1;
        }
    }
    if (dem != 0) {
        return false;
    } else {
        return true;
    }
}

int main() { 
    int n;

    std::cout << "Nhap mot so nguyen: ";
    std::cin >> n;

    if (is_prime(n)) {
        std::cout << n << " la so nguyen to" << std::endl;
    } else {
        std::cout << n << " khong phai la so nguyen to" << std::endl;
    }

    return 0;
}
