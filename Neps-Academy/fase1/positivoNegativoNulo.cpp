/*
    Problema: Positivo, negativo ou nulo
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor de entrada enviado (x).
            Uso condicionais para verificar se ele é positivo (x>0), negativo (x<0) ou nulo (x==0)
    */
    int x;
    cin >> x;

    if (x>0) {
        cout << "positivo";
    } else if (x<0) {
        cout << "negativo";
    } else {
        cout << "nulo";
    }
}
