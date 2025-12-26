/*
    Problema: Divisão do tesouro
    Fonte: Neps Academy
    Técnica utilizada: Variáveis e operadores lógicos
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica: Leio o número de moedas (n) e de marinheiros (m) na arca.
        Depois somo mais 2 ao valor dos marinheiros para representar a quantia do capitão (c), que é o dobro dos marinheiros.
        Divido o valor total de marinheiros + capitão pelo número de moedas.
        O resultado dessa divisão eu multiplico por 2, e assim chego no valor de moedas que o capitão recebe.
    */
    int n, m, c;
    cin >> n >> m;
    c = n/(m+2)*2;
    cout << c;
}
