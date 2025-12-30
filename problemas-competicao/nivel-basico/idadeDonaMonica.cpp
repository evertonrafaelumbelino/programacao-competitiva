/*
    Problema: Idade de dona Mônica
    Fonte: OBI 2019 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, operadores aritméticos, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores da idade de dona Mônica (m) e de dois dos seus filhos (a, b).
            Subtraio o valor da idade de Mônica pela idade dos dois filhos, e assim encontrando a idade do terceiro filho (c=m-(a+b)).
            Verifico qual dos filhos é o mais velho, e imprimo a idade dele.
    */
    int m, a, b, c;
    cin >> m >> a >> b;
    c = m-(a+b);

    if (a>b && a>c) {
        cout << a;
    } else if (b>a && b>c) {
        cout << b;
    } else {
        cout << c;
    }
}
