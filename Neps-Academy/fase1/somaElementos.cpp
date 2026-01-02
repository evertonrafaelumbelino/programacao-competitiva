/*
    Problema: Soma dos elementos
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, operadores de atribuição e laços de repetição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o número de valores que serão enviados (n).
            Utilizo ele na condição de um laço de repetição for para somar todos os valores que serão enviados em seguida (v).
            No final, imprimo o valor total (t) da soma de todos os números enviados.
    */
    int n, v, t;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> v;
        t += v;
    }
    cout << t;
}
