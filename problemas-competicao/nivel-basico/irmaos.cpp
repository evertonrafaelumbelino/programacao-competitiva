/*
    Problema: Irmãos
    Fonte: Neps Academy
    Técnica utilizada: Variáveis e operadores lógicos
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio a idade de Orlando (n) e Otávio (m).
            Subtraio a idade deles, e faço uma soma com a idade de Otávio e com o resultado da subtração.
            Assim encontro o valor da idade de Oscar (o).
    */
    int n, m, o;
    cin >> n >> m;
    o = (m-n)+m;
    cout << o;
}
