#include <iostream>

int max(int numbers[], int n) { 
    int mac = numbers[0]; 
    for (int i = 0; i < n; i++) { 
        if (mac < numbers[i]) { 
            mac = numbers[i]; 
        } 
    } 
    return mac;
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

    std::cout << "Gia tri lon nhat trong mang la: " << max(numbers, n) << std::endl;

    return 0;
}
