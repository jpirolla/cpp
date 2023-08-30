#include <iostream>

using namespace std;

/*
Dado um array A de tamanho N e solicitada Q consultas do tipo: 
no interalo L, R -> retornar o maior elemento nesse intervalo
*/ 

const int N = 1e5 + 7;  // definindo o tamanho máximo do array


// incrementação da build

// void indica uma função que não retorna valor
// usado principalmente em funções que realizam tarefas  
// ao invés de calcular ou produzir resultados. 

int segtree[4 * N];  // declaro o array segtree de tamanho 4*N

void build(int curr, int extremo_inf, int extremo_sup) {

	// caso base da recursao -> folha
	if (extremo_inf == extremo_sup) {
		segtree[curr] = a[extremo_inf];
	} else { 
		// começa na raiz e chama 2 filhos -> preciso calcular o intervalo dos filhos

		// definindo o ponto de quebra como o meio 
		int mid = (extremo_inf + extremo_sup)/2;

		// chamo o filho esquerdo e direito, respectivamente
		build(2 * curr, extremo_inf, mid);
		build(2 * curr + 1, mid + 1, extremo_sup);

		// agora preciso colocar o valor que o nó guarda
		segtree[curr] = max(segtree[2 * curr], segtree[2 * curr + 1]);
	}
}
// implementação da query
// curr representa o nó atual
// [extremo_inf, extremo_sup] é o intervalo do nó 
// [a,b] é o intervalo de consulta

int query(int curr, int extremo_inf, int extremo_sup, int a, int b)
	// devo checar qual dos 3 casos de intervalos que estou (total dentro, total fora ou meio termo)
	
	// totalmente fora
	if (extremo_sup < a or extremo_inf > b) return -1e9;  // retorno -inf

	// totalmente dentro 
	if (extremo_inf >= a and extremo_sup <= b) return segtree[curr]; 

	// meio termo 
	return max(
		query(2 * curr, extremo_inf, mid, a, b),
		query(2 * curr + 1, extremo_inf, mid + extremo_inf, a, b)
		);


int main() {
	// var usada para armazenar o número de elementos que serao lidos 
	int num_elem;  

	// solicita que o usuário insira um valor inteiro para a variável
	// indica quantos elem o array tem 
	cin >> num_elem; 

	// inicialização de i, condição i < n, incremento i++ 
	for (int i = 0; i < num_elem; i++){
		// le um int e o atribui à pos i do array a
		cin >> a[i];
	}

	// (0, num_elem -1): intervalo em questão
	build(1, 0, num_elem - 1); 

	// Resp queries 
	int num_queries;
	cin >> num_queries; 

	// decrementa 1 até que num queries seja 0
	while(num_queries--){
		int extremo_inf, extremo_sup; 
		cin >> extremo_inf >> extremo_sup; 
		cout << query(1, 0, n-1, extremo_inf, extremo_sup) << endl;
	}
}