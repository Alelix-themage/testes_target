/*3) Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, 9

b) 2, 4, 8, 16, 32, 64, 128

c) 0, 1, 4, 9, 16, 25, 36, 49  (7^2)

d) 4, 16, 36, 64, 100  (10^2) --> indice pares elevados a 2

e) 1, 1, 2, 3, 5, 8, 13

f) 2,10, 12, 16, 17, 18, 19, 20



4) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada.

Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?
Resposta: Ligo o primeiro interruptor e saiu da sala tentando achar a primeira que eu acendi a luz, caso eu ache, eu volto e acendo uma segunda de outra sala, 
ficando assim apenas uma para eu achar (que seria a última). Mas no caso de eu não achar na primeira, eu tento de novo e busco achar os quartos corretos
baseados na sequência dos interruptores.*/
/*5) Escreva um programa que inverta os caracteres de um string.


IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include  <iostream>
#include <string>
using namespace std;

int main(){
    string palavra = "Contratado";
    int tamanho_palavra = palavra.size();
    for(int i =0; i < tamanho_palavra/2; i++){
        char op = palavra[i];
        palavra[i] = palavra[tamanho_palavra - i - 1]; // acessa um caracter da string, baseado no índice
        palavra[tamanho_palavra - i - 1] = op; // é usado para trocar os caracteres de lugar
    }
    cout << "Palavra invertida " << palavra << endl;
    return 0;
}