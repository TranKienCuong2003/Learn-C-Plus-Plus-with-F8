#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

class FactorialCalculator {
public:
    void calculateFactorial() {
        int n;
        boost::multiprecision::cpp_int result = 1;

        std::cout << "Nhap so nguyen n: ";
        while (!(std::cin >> n) || n < 0) {
            std::cout << "Loi: Vui long nhap mot so nguyen khong am hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        for (int i = 1; i <= n; i++) {
            result *= i;
        }

        std::cout << "Giai thua cua " << n << " la: " << result << std::endl;
    }
};

int main() {
    FactorialCalculator calculator;
    calculator.calculateFactorial();
    return 0;
}
