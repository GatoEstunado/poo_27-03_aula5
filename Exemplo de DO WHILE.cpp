// Puxar as bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main() {
    // Introduzir as variáveis
   int num;
   
   //Condição
   do {
       // Interface do usuário
       cout << "Digite um número de 1 a 10: ";
       cin >> num;
       // Enquanto
   } while (num < 1 || num > 10);
   
   // Interface de conclusão
   cout << "Você digitou o número: " << num << ".";
   
   return 0;
}