/*
    Problema: Valores entre dois números
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, laços de repetição, condicionais e operadores aritméticos/atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os dois valores que serão enviados (a, b).
            Verifico qual dos valores é o menor.
            Uso um loop for para somar o valor de iteração junto ao menor valor até que ele continue menor que o maior valor.
            A variável que guarda essa soma é "v" (valores).
            No fim de cada loop, imprimo o valor de "v" em cada iteração.
    */
    int a, b, v=0;
    cin >> a >> b;

    if (b>a) {
        for (int i=0; v<b; i++) {
            v=a+i;
            cout << v << ' ';
        }
    } else {
        for (int i=0; v<a; i++) {
            v=b+i;
            cout << v << ' ';
        }
    }

}
