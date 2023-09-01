#include <iostream>
#include <cmath> 

int main() {
    const double pi =  3.14159;

    double raio;
    std::cin >> raio;

    double volume = (4.0 / 3) * pi * std::pow(raio, 3);

    std::cout.precision(3);
    std::cout << "VOLUME = " << std::fixed << volume << std::endl;

    return 0;
}


