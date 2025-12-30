/*
    Problema: Overflow
    Fonte: OBI 2009 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, operadores aritméticos e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor máximo que o computador suporta (n), e os valores e simbólos da conta que ele precisa fazer (p, c, q).
            Faço o conta (p+q se c==+; ou p*q se c==*), e com base no resultado, verifico se vao ocorrer overflow ou não.
            Caso tudo ocorra bem, imprimo "OK", caso dê overflow, imprimo "OVERFLOW".
    */
    int n, p, q;
    char c;
    cin >> n >> p >> c >> q;

    if (c=='+') {
        if (p+q>n) {
            cout << "OVERFLOW";
        } else {
            cout << "OK";
        }
    } else {
        if (p*q>n) {
            cout << "OVERFLOW";
        } else {
            cout << "OK";
        }
    }
}
