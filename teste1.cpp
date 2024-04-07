#include <iostream>
using namespace std;

/*1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);



Ao final do processamento, qual será o valor da variável SOMA?*/
//Respota: O valor da varíavel soma será 91.


int main(){
    int indice = 13, soma = 0;
    int k = 0;

    while(k < indice){
        k = k + 1;
        soma = soma + k;
    }
    cout << soma << endl;
    return 0;
}