#include <iostream>
#include <limits>

class NumberPrinter {
public:
    void printNumbers() {
        int n;

        std::cout << "Nhap so nguyen n: ";
        while (!(std::cin >> n) || n <= 0) {
            std::cout << "Loi: Vui long nhap mot so nguyen duong hop le: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        for (int i = 1; i <= n; i++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    NumberPrinter printer;
    printer.printNumbers();
    return 0;
}
