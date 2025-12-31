/*
    Problema: Cartas
    Fonte: OBI 2017 - Nível Júnior - Fase 2
    Técnicas utilizadas: Varíaveis e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores das 3 cartas já mostradas (a, b,c).
            Verifico quais delas são iguais e qual é a diferente. Sabendo disso, a carta que falta é o par da carta única diferente.
            Por fim, imprimo o valor da carta que falta.
    */
    int a, b, c;
    cin >> a >> b >> c;

    if (c==b) {
        cout << a;
    } else if (c==a) {
        cout << b;
    } else {
        cout << c;
    }
}
