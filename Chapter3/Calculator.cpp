#include <iostream>
#include <limits>

int main() {
    char lua_chon;
    int a, b;

    do {
        std::cout << "Nhap phep toan (+, -, *, /): ";
        while (true) {
            std::cin >> lua_chon;
            if (std::cin.fail() || (lua_chon != '+' && lua_chon != '-' && lua_chon != '*' && lua_chon != '/')) {
                std::cout << "Loi: Vui long nhap phep toan hop le (+, -, *, /): ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        std::cout << "Nhap so a: ";
        while (true) {
            std::cin >> a;
            if (std::cin.fail()) {
                std::cout << "Loi: Vui long nhap so nguyen a: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        std::cout << "Nhap so b: ";
        while (true) {
            std::cin >> b;
            if (std::cin.fail()) {
                std::cout << "Loi: Vui long nhap so nguyen b: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        switch (lua_chon) {
            case '+':
                std::cout << "Ket qua: " << a + b << std::endl;
                break;
            case '-':
                std::cout << "Ket qua: " << a - b << std::endl;
                break;
            case '*':
                std::cout << "Ket qua: " << a * b << std::endl;
                break;
            case '/':
                if (b != 0) {
                    std::cout << "Ket qua: " << static_cast<float>(a) / static_cast<float>(b) << std::endl;
                } else {
                    std::cout << "Loi: Khong the chia cho 0!" << std::endl;
                }
                break;
            default:
                std::cout << "Lua chon khong hop le!" << std::endl;
                break;
        }

        std::cout << "Ban co muon thuc hien phep toan khac? (y/n): ";
        std::cin >> lua_chon;

    } while (lua_chon == 'y' || lua_chon == 'Y');

    std::cout << "Cam on ban da su dung chuong trinh!" << std::endl;

    return 0;
}
