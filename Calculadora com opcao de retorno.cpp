// Puxar as bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main() {
    // Introduzir as variaveis
    char op, resposta;
    float num1, num2;
    bool continuar = true;
    
    while (continuar) {
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
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
        case '-':
        // Receber, calcular e entregar -
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
        case '*':
        // Receber, calcular e entregar *
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
        case '/':
        // Receber, calcular e entregar /
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
        default:
        // Em caso de inserimento invalido
        cout << "Operador errado, por favor insira o operador correto" << endl;
        break;
    }
    // Interface do usuario pos finalizacao
   cout << "Deseja realizar um nova conta? " << endl;
   // Recebimento da resposta
   cin >> resposta;

    // Comandos validos para a resposta para a ativacao do loop 
    while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
        // Caso a resposta seja invalida
        cout << "Resposta invalida. Deseja continuar? (s/n): ";
        cin >> resposta;
    }
        // Definir 'S' ou 's' como chave para continuar
        continuar = (resposta == 's' || resposta == 'S');
    }
    return 0;
} 
