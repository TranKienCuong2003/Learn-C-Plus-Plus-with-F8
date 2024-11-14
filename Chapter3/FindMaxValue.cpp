#include <iostream>
#include <limits>

int main() { 
    int a, b;

    std::cout << "Nhap so thu nhat: ";
    while (!(std::cin >> a)) {
        std::cout << "Loi: Vui long nhap mot so nguyen hop le: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Nhap so thu hai: ";
    while (!(std::cin >> b)) {
        std::cout << "Loi: Vui long nhap mot so nguyen hop le: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int max = (a > b) ? a : b;

    std::cout << "Gia tri lon nhat la: " << max << std::endl;

    return 0;
}
