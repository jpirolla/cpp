#include <iostream>
#include <cmath>  // equivalente à <math.h> em c

using namespace std; 

int main(){
	// módulo e operações aritméticas básicas com int e float
	// não precisam incluir nenhuma biblio adicional

	// operação de potência -> incluir <cmath>

	int potencia = pow(2, 3);
	int var = 1 + pow((2 * 3), 4) * 5;

	cout << "potencia pow(2,3): " << potencia << endl; 
	cout << "1 + pow((2 * 3), 4) * 5: " << var << endl; 

	// ordem de operações no C++ é tal como em C 
	//  expressões em parêntesis são avaliadas primeiro, 
	// seguidos por exponenciação, multiplicação, divisão, 
	// adição e subtração.

	return 0;
}