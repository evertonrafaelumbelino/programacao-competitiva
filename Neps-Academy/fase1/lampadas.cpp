/*
    Problema: Lâmpadas
    Fonte: OBI 2016 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, condicionais, operadores lógicos e laços de repetição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor de vezes que os interruptores foram apertados (n).
            Uso esse valor na condição do laço de repetição for.
            Vou lendo os valores que forem sendo enviados sobre qual interruptor foi apertado (v).
            Se for 1, o interruptor 1 foi apertado; se 2, o interruptor 2 foi apertado.
            Caso seja 1, somente a lâmpada "a" muda de estado (1 ou 0); caso seja 2, a lâmpada "a" e "b" mudam de estado (1 ou 0).
            O número 1 significa que a lâmpada está acesa, o 0 significa que está apagada.
            As duas lâmpadas iniciam apagadas.
            No fim, imprimo qual é o estado das lâmpadas "a" e "b", respectivamente.
    */
    int n, v, a=0, b=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> v;

        if (v==1) {
            if (a==0) {
                a=1;
            } else {
                a=0;
            }
        } else {
            if (a==0 && b==0) {
                a=1;
                b=1;
            } else if (a==0 && b==1) {
                a=1;
                b=0;
            } else if (a==1 && b==0) {
                a=0;
                b=1;
            } else {
                a=0;
                b=0;
            }
        }
    }
    cout << a << endl << b;
}
