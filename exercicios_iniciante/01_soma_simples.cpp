#include <iostream>

int main() {
    int a, b;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    int soma = a + b;
    std::cout << "SOMA = " << soma << std::endl;

    return 0;
}