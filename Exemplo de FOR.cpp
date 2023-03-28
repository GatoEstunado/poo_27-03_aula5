// Puxar as bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main() {
    // Introduzir as variáveis
   int num;
   
   // Interface do usuário
   cout << "Digite um número inteiro positivo: ";
   cin >> num;
   
   // Interface de conclusão do usuário
  cout << "Os primeiros " << num << " números pares são: ";
  
  // Introduzir a seguunda variável para FOR
  // Analisar e gerar os valores (resultado)
  for (int i = 2; i <= num * 2; i += 2) {
      cout << i << " ";
  }
  return 0;
}