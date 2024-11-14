#include <iostream>
#include <limits>

class ResultCalculator {
public:
    void calculate() {
        int n;

        std::cout << "Nhap so nguyen n: ";
        while (!(std::cin >> n)) {
            std::cout << "Loi: Vui long nhap mot so nguyen hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int result = (n % 2 == 0) ? (n * 2) : (n * 3);
        std::cout << "Ket qua la: " << result << std::endl;
    }
};

int main() {
    ResultCalculator calculator;
    calculator.calculate();
    return 0;
}
