#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Vui long nhap so nguyen: ";
    cin >> n;

    cout << "Cac so chia het cho 5 tu khoang 1 den " << n << " la: ";

    bool first = true;
    for (int i = 5; i <= n; i += 5) {
        if (!first) {
            if (i == n || (i + 5 > n)) {
                cout << " va "; 
            } else {
                cout << ", "; 
            }
        }
        cout << i;
        first = false;
    }

    cout << endl;

    return 0;
}
