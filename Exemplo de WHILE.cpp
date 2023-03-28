// Puxar as bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main() {
    // Introduzir as variáveis
   int num, i = 1;
   
   // Interface do usuário
   cout << "Digite um numero inteiro positivo: ";
   cin >> num;
   // Execução
    while (i <= num) {
       cout << i << " ";
       i++;
   }
   return 0;
}