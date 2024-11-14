#include <iostream>

int main() { 
    int n, numbers[10];

    printf("Vui long nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int i = 0;
    printf("Vui long nhâp cac phan tu cua mang: \n");
    while(i < n) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    int j = 0;
    printf("Mang ban da nhap la: ");
    while(j < n) {
        printf("%d ", numbers[j]);
        j++;
    }
    printf("\n");

    return 0;
}
