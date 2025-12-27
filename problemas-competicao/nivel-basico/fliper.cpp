/*
    Problema: Flíper
    Fonte: OBI 2014 - Nível Júnior - Fase 1
    Técnica utilizada: Variáveis, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores de P e R, que podem ser 0 (esquerda) ou 1 (direita), representando para qual lado a "portinha" está fechada.
            Com base neles, verifico por meio de condições quais seram as saídas da bolinha.
            Exemplo prático:
                Se P = 1 e R = 0, então a bolinha vai cair no caminho B.
    */
    int p, r;
    cin >> p >> r;

    if (p == 1 && r == 0) {
        cout << "B";
    } else if (p == 1 && r == 1) {
        cout << "A";
    } else {
        cout << "C";
    }
}
