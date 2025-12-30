/*
    Problema: Zerinho ou um
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores das jogadas de cada pessoa (a, b, c), que pode ser 0 ou 1.
            Com condicionais, verifico se um deles mostrou um número diferente dos outros dois. Se isso acontecer, essa pessoa ganha.
            Se todos mostrarem o mesmo número, acontece empate (*).
    */
    int a, b, c;
    cin >> a >> b >> c;

    if (a!=b && a!=c) {
        cout << "A";
    } else if (b!=a && b!=c) {
        cout << "B";
    } else if (c!=a && c!=b) {
        cout << "C";
    } else {
        cout << "*";
    }
}
