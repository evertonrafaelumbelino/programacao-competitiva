/*
    Problema: Código
    Fonte: OBI 2015 - Nível Júnior - Fase 2
    Técnicas utilizadas: Variáveis, condicionais, laços de repetição e operadores de atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor do tamanho do número do código (n).
            Uso ele na condição do laço de repetição for, para definir o número de vezes que ela vai se repetir.
            Vou lendo os valores de cada número e armazeno eles em variáveis específicas. Sendo elas:
            "p" (penúltimo valor), "u" (último valor) "a" (atual valor).
            Com isso, se o valor de "p", "u" e "a" forem 1, 0 e 0, respectivamente, eu adiciono 1 a varíavel "t" (total de números 100).
            No fim, imprimo o valor de "t", mostrando quantos números 100 existem na sequência do código.
    */
    int n, a, u, p, t=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> a;
        if (p==1 && u==0 && a==0) {
            t++;
        }
        p = u;
        u = a;
    }
    cout << t;
}
