#include <iostream>
#include <iomanip>

int main() {
    double num1, num2;

    std::cin >> num1 >> num2;

    double peso1 = 3.5, peso2 = 7.5;
    double media = (num1 * peso1 + num2 * peso2) / (peso1 + peso2);

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;

    return 0;
}
