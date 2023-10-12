#include <iostream>

int main() {
    int A, B, C, D;
    
    std::cin >> A >> B >> C >> D;
    
    int dif = (A*B-C*D);
    
    std::cout << "DIFERENCA = " << dif << std::endl;
    return 0;
}