#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int decimalparabinario(int numero){
    int numerobinario = 0;
    while (numero > 0)
    {
        numerobinario = 10*numerobinario + (numero%2);
        numero = floor(numero/2);
    }
    return numerobinario;
}

int binarioparadecimal(int numero){
    int posicao = 0;
    int numerodecimal = 0;
    while (numero >= 1)
    {
        numerodecimal = numerodecimal + (numero%10)*pow(2, posicao);
        posicao++;
        numero = (numero - (numero%10))/10;
    }
    return numerodecimal;
}

int main(int argc, char const *argv[])
{
        while (true){
        /*declarando vari�veis*/
        int opcao, numero, convertido = 0;
        cout << "\nDigite o numero a ser convertido:\n";
        cin >> numero;
        cout << "\nqual opcao? \n 1- Binario para decimal \n 2- Decimal para binario\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            /* chamar Bin�rio para decimal*/
            convertido = binarioparadecimal(numero);
            cout << "o numero em Decimal eh " << convertido << endl;
            continue;
        case 2:
            convertido = decimalparabinario(numero);
            cout << "o numero em Binario eh " << convertido << endl;
            continue;
        default:
            cout << "Opcao invalida!" <<endl;
            continue;
        }
    }
}
