#include <iostream>
#include <limits>

class SumCalculator {
public:
    void calculateSum() {
        int n;
        int result = 0;

        std::cout << "Nhap so nguyen n: ";
        while (!(std::cin >> n) || n <= 0) {
            std::cout << "Loi: Vui long nhap mot so nguyen duong hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        for (int i = 1; i <= n; i++) {
            result += i;
        }

        std::cout << "Tong tu 1 den " << n << " la: " << result << std::endl;
    }
};

int main() {
    SumCalculator calculator;
    calculator.calculateSum();
    return 0;
}
