#include <iostream>
#include <iomanip> // Para setprecision

int main() {

    double A, B;
    
    std::cin >> A >> B; // Lê as duas notas
    
    // Calcula a média ponderada
    double media = (A * 3.5 + B * 7.5) / 11.0;
    
    // Configura a saída para 5 casas decimais
    std::cout << std::fixed << std::setprecision(5);
    
    // Imprime a média formatada
    std::cout << "MEDIA = " << media << std::endl;
    
    return 0;
}