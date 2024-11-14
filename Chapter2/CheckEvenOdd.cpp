#include <iostream>
#include <limits>

int main() {
    int a;

    std::cout << "Nhap mot so nguyen: ";

    while (true) {
        std::cin >> a;
        
        if (std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Loi: Vui long nhap mot so nguyen!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Nhap mot so nguyen: ";
        } else {
            break;
        }
    }

    int res = a % 2;
    bool judge = res == 0;

    if (judge) {
        std::cout << "So " << a << " la so chan." << std::endl;
    } else {
        std::cout << "So " << a << " la so le." << std::endl;
    }

    return 0;
}
