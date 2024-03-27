#include <iostream>
#include <string>

using namespace std;

bool ehFib(int num, int base1, int base2) {
    int prox = base1 + base2;
    
    if (num <= 1) {
        return true;
    } 
    
    if (prox == num) {
        return true;
    } else if (prox > num) {
        return false;
    } 
    
    return ehFib(num, base2, prox);
    
    
}

int main()
{
  string resultado = ehFib(6, 0, 1) ? "Faz parte da sequência fibonacci" : "Não faz parte da sequência fibonacci";
  cout << resultado;
}
