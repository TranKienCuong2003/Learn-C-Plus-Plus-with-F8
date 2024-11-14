#include <iostream>

int main() { 
    int n, numbers[10];
    int Sum = 0;

    printf("Vui long nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    int i = 0;
    while( i < n){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        Sum += numbers[i];
        i++;
    }

    printf("Tong cac phan tu trong mang la: %d\n", Sum);

    return 0;
}
