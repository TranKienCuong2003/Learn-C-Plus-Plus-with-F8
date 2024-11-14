#include <iostream>

int main() {
    int n, numbers[10];

    std::cout << "Nhap so luong phan tu can sap xep: ";
    std::cin >> n;

    std::cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap phan tu " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Thực hiện thuật toán sắp xếp nổi bọt
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }

    std::cout << "Danh sach cac phan tu sau khi sap xep la: ";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
