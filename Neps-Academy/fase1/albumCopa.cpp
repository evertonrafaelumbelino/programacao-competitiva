/*
    Problema: Álbum da copa
    Fonte: OBI 2018 - Nível Júnior - Fase 1
    Técnicas utilizadas: Vetores, variáveis, condicionais, laços de repetição e operadores aritméticos/atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Crio as variáveis "n" (todas as figurinhas), "c" (figurinhas compradas), "v" (valor/número das figurinhas) e "q" (quantidade que falta de figurinhas).
            Crio também o vetor "f", que recebe "n" valores todos recebendo 0 (por causa das {} chaves).
            Uso um loop for para receber os valores das figurinhas.
            Armazeno os valores delas em seus devidos espaços (v-1, pois o vetor começa em 0; se v=5, é guardado na posição 4).
            Uso outro for para verificar quais espaços dentro de "f" ainda não tem valor (ou seja, que são as figurinhas que faltam).
            Armazeno esse valor dentro de "q", e no fim imprimo ele.
    */
    int n, c, v, q=0;
    cin >> n;
    cin >> c;
    int f[n] = {};

    for (int i=0; i<c; i++) {
        cin >> v;
        f[v-1] = v;
    }
    for (int i=0; i<n; i++) {
        if (f[i]==0) {
            q++;
        }
    }
    cout << q;
}
