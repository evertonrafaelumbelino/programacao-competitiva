/*
    Problema: Aprovado ou reprovado
    Fonte: Neps Academy
    Técnica utilizada: Variáveis, operadores aritméticos, operadores lógicos e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    float n1, n2, m;
    cin >> n1 >> n2;
    m = (n1+n2)/2;

    if (m >= 7) {
        cout << "Aprovado";
    } else if (m>=4 && m<7) {
        cout << "Recuperacao";
    } else {
        cout << "Reprovado";
    }
}
