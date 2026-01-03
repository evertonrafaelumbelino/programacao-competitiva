/*
    Problema: Garçom
    Fonte: OBI 2010 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, condicionais, laços de repetição e operadores de atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores de quantas bandejas o garçom levou (n).
            Uso ela na condição do laço de repetição for.
            Dentro do for, leio os valores de latas (l) e copos (c) que o garçom levou em cada bandeja.
            Se o valor de latas for maior que o de copos, o garçom vai deixar cair e quebrar todos os copos da bandeja.
            Armazedo esses copos quebrados na variável "t", representando o total de copos  quebrados.
            No fim, imprimo quantos copos foram quebrados.
    */
    int n, l, c, t=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> l >> c;
        if (l>c) {
            t += c;
        }
    }
    cout << t;
}
