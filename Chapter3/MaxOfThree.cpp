#include <iostream>
#include <limits>

class MaxCalculator {
public:
    void findMax() {
        int a, b, c;

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

        std::cout << "Nhap so thu ba: ";
        while (!(std::cin >> c)) {
            std::cout << "Loi: Vui long nhap mot so nguyen hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int max1 = (a > b) ? a : b;
        int max2 = (max1 > c) ? max1 : c;
        std::cout << "So lon nhat la: " << max2 << std::endl;
    }
};

int main() {
    MaxCalculator calculator;
    calculator.findMax();
    return 0;
}
