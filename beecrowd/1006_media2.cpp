#include <iostream>
#include <iomanip>

int main() {
    double A, B, C;
    std::cin >> A >> B >> C;

    double pesoA = 2.0, pesoB = 3.0, pesoC = 5.0;

    double media = (A * pesoA + B * pesoB + C * pesoC) / (pesoA + pesoB + pesoC);

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;

    return 0;
}
