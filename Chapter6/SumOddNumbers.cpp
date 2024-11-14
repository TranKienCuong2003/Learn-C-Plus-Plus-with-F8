#include <iostream>

int total_odd(int *numbers, int n) {
    int odd = 0; 
    for(int i = 0; i < n; i++) 
        (numbers[i] % 2 != 0) ? odd += numbers[i] : 0; 
    return odd; 
}

int main() { 
    int numbers[10]; 
    int n;

    std::cout << "Nhap so luong phan tu cua mang: ";
    std::cin >> n;
    
    std::cout << "Nhap " << n << " gia tri cho mang:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap gia tri thu " << i + 1 << " cua mang: ";
        std::cin >> numbers[i];
    }

    std::cout << "Tong cac so le trong mang la: " << total_odd(numbers, n) << std::endl;

    return 0;
}
