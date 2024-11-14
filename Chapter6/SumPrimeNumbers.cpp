#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 || n <= 1) {
            return false;
        }
    }
    return true;
}

int total_prime(int numbers[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(numbers[i]) == true) {
            sum += numbers[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    int numbers[10];

    std::cout << "Nhap so luong phan tu trong mang: ";
    std::cin >> n;

    std::cout << "Nhap " << n << " gia tri cho mang:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap gia tri thu " << i + 1 << " cua mang: ";
        std::cin >> numbers[i];
    }

    std::cout << "Tong cac so nguyen to trong mang la: " << total_prime(numbers, n) << std::endl;

    return 0;
}
