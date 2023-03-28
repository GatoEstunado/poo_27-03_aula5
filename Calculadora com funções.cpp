// Bibliotecas
#include <iostream>
using namespace std;

// Funcao de Soma
int Soma (int a, int b)
{
    // Calculo de soma
    int resultSoma;
    resultSoma = a + b;
    return resultSoma;
}
//  Funcao de subtracao
int Sub (int a, int b)
{
    // Calcula de subtracao
    int resultSub;
    resultSub = a - b; 
    return resultSub;
}
// Funcao de divisao
int Divisao (int a, int b)
{
    // Calculo de divisao
    int resultDivisao;
    resultDivisao = a / b;
    return resultDivisao;
}
// Funcao de multiplicacao
int Mult (int a, int b)
{
    // Calculo de multiplicacao
    int resultMult;
    resultMult = a * b;
    return resultMult;
}
// Programa principal 
int main() {
    int a, b;
    
    // Interface do usuario para inserir os numeros
    cout << "Digite dois numeros: " << endl;
    // Receber os numeros, valores
    cin >> a;
    cin >> b;


    // Puxar os resultados e apresentar ao usuario
    cout << "Resultado da soma: " << Soma (a, b) << endl;
    cout << "Resultado da subtracao: " << Sub (a,b) << endl;
    cout << "Resultado da divisao: " << Divisao (a, b) << endl;
    cout << "Resultado da multiplicacao: " << Mult (a, b) << endl;
    
}