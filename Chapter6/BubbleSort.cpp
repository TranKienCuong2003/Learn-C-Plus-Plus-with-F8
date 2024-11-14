#include <iostream>

void bubble_sort(int numbers[10], int n) {
    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(numbers[j] > numbers[j + 1]) {
                int tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }
}

void input_arr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << "Nhap gia tri thu " << i + 1 << " cua mang: ";
        std::cin >> arr[i];
    }
}

void print_arr(int arr[], int n) {
    std::cout << "Mang sau khi sap xep la: ";
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[10]; 
    int n;

    std::cout << "Nhap so luong phan tu trong mang: ";
    std::cin >> n;

    input_arr(numbers, n);
    bubble_sort(numbers, n);
    print_arr(numbers, n);

    return 0;
}
