#include<iostream>
#include <string>

int main(){

	std::string nome;
	double fixo, adicional;

	std::cin >> nome >> fixo >> adicional;

	double final = (fixo + 0.15*adicional); 

	// Configura a saída para duas casas decimais
    std::cout.precision(2);
	std::cout << "TOTAL = R$ " << std::fixed << final << std::endl;
	
	return 0;
}