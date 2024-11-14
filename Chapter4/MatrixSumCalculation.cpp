#include <iostream>
using namespace std;

int main() {
    int m, n, sum = 0;

    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    int arr[m][n];

    cout << "Nhap gia tri cho cac phan tu trong ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap gia tri cho phan tu tai hang " << i + 1 << ", cot " << j + 1 << ": ";
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Tong cua tat ca cac phan tu trong ma tran la: " << sum << endl;

    return 0;
}
