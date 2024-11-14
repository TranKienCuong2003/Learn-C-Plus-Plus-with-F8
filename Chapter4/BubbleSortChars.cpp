#include <iostream>

int main() { 
    int n; 
    char characters[10];

    std::cout << "Nhap so luong ky tu can sap xep: ";
    std::cin >> n;

    std::cout << "Nhap " << n << " ky tu:\n";
    for(int i = 0; i < n; i++ )
    {
        std::cout << "Nhap ky tu thu " << i + 1 << ": ";
        std::cin >> characters[i];
    }

    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(characters[j] > characters[j + 1])
            {
                int stm = characters[j + 1];
                characters[j + 1] = characters[j];
                characters[j] = stm;
            }
        }
    }

    std::cout << "Danh sach ky tu sau khi sap xep la: ";
    for(int i = 0; i < n; i++)
    {
        std::cout << characters[i] << " ";
    }

    return 0;
}
