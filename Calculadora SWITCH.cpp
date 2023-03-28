// Puxar as bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main() {
    // Introduzir as variáveis
    char op;
    float num1, num2;
    // Interface do operador
    cout << "Entre com o operador: +, -, *, /: ";
    cin >> op;
    // Interface dos valores
    cout << "Entre com os valores: ";
    cin >> num1 >> num2;
    
    // Possibilidades
    switch(op) {
        case '+':
        // Receber, calcular e entregar +
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
        // Receber, calcular e entregar -
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*':
        // Receber, calcular e entregar *
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
        // Receber, calcular e entregar /
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        // Em caso de inserimento inválido
        cout << "Operador errado, por favor insira o operador correto";
        break;
    }
    return 0;
} 
