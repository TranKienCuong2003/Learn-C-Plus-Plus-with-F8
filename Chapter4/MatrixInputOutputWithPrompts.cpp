#include <iostream>
using namespace std;

int main() {
    int m, n;
    
    cout << "Nhap so hang: ";
    cin >> m;
    
    cout << "Nhap so cot: ";
    cin >> n;
    
    int arr[m][n];
    
    cout << "Vui long nhap gia tri cho cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap gia tri cho phan tu ";
            cout << "thu " << j + 1 << " cua hang " << i + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    
    cout << "Ma tran sau khi nhap la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
