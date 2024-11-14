#include <iostream>

int total(int numbers[][10], int n, int m) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s += numbers[i][j];
        }
    }
    return s;
}

int main() {
    int numbers[10][10];
    int m, n;

    std::cout << "Nhap so dong (m) cua ma tran: ";
    std::cin >> m;
    std::cout << "Nhap so cot (n) cua ma tran: ";
    std::cin >> n;

    std::cout << "Nhap gia tri cho ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "Nhap gia tri " << j + 1 << " trong hang " << i + 1 << " cua ma tran: ";
            std::cin >> numbers[i][j];
        }
    }

    std::cout << "Tong cac phan tu trong ma tran la: " << total(numbers, m, n) << std::endl;

    return 0;
}
