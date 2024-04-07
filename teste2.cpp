/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.



IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/

#include <iostream>
using namespace std;

long long int iterativa_fibonacci(int n){
   long long int atual = n;
   long long int ultimo = 1;
   long long int penultimo = 0;

    for(int i = 2; i <= n; i++){
        atual = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = atual;
    }
    return atual;
}

int main(){
    int num_fibonacci = 0; 
    int numero = 7;// mude o numero aqui
    int i = 0; //Contador que irá percorrer a função, começando em 0 e ira até achar o numero para saber se ele faz parte da sequência

    while(true){
        num_fibonacci = iterativa_fibonacci(i);
        if(num_fibonacci == numero ){
            cout << "Este numero (" << numero << ") faz parte da sequencia de Fibonacci" << endl;
            break;
        }
        else if(num_fibonacci > numero){
            cout << "O numero (" << numero << ") nao faz parte da sequencia de fibonacci " << endl;
            break;
        }
        i++;

    }
}