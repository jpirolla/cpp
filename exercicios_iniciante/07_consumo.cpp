#include <iostream>

int main() {

	int dist;
	std::cin >> dist; 

	double combustivel;
	std::cin >> combustivel;

	double rendimento;
	rendimento = dist/combustivel;


	std::cout.precision(3);
	std::cout << std::fixed << rendimento << " km/l" << std::endl;
	return 0;
}