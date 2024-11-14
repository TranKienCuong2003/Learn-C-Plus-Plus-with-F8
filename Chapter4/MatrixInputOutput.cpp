#include <iostream>

int main() { 
    int numbers[2][3];

    std::cout << "Vui long nhap 6 phan tu cho ma tran 2x3: \n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Nhap gia tri thu " << j + 1 << " cua hang " << i + 1 << ": ";
            std::cin >> numbers[i][j];
        }
    }

    std::cout << "Ma tran sau khi nhap la: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << numbers[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
