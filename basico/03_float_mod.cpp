#include <iostream>

using namespace std; 

int main(){
	// diferente de c, não precisamos nos preocupar mascaras 
	// para trabalhar com pontos flutuantes por ex 

	float var = 5.0 / 2;
	float mod = 5 % 2;

	cout << "div ponto flutuante: " << var << endl;
	cout << "operação módulo -> " << mod << endl; 

	return 0;
}