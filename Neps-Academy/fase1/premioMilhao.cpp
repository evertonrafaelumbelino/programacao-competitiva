/*
    Problema: Prêmio do milhão
    Fonte: OBI 2015 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, operadores de atribuitação, ariméticos e laços de repetição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor de dias que temos na lista (n).
            Uso essa quantia de dias como parte da condição para um laço de repetição for.
            Dentro do for, primeiro verifico se o valor chega em 1 milhão ou não.
            Se ainda não alcançou 1 milhão, leio os valores dos acessos em cada dia (a).
            Vou somando o valor total (t) de cada dia após cada iteração.
            No fim, imprimo o valor de dias até que alcançasse o 1 milhão de acessos (i-1).
            O valor de dia é i-1 porque o laço de repetição primeira faz t chegar em 1 milhão ou mais, para depois verificar o valor.
            Então assim, no loop em que t=1000000 ele já passou pela verificação antes, então só no próximo loop que a verificação é feita de novo.
            Assim, o "i" recebe um valor a mais para depois verificar o valor total, então por isso é necessário subtrair 1 de i.
    */
    int n, a=0, t=0, i;
    cin >> n;

    for (i=1; i<=n; i++) {
        if (t<1000000) {
            cin >> a;
            t += a;
        } else {
            break;
        }
    }
    cout << i-1;
}
