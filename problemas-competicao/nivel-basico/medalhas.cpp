/*
    Problema: Medalhas
    Fonte: OBI 2016 -Nível Júnior - Fase 2
    Técnicas utilizadas: Variáveis, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os 3 valores de tempo dos atletas (t1, t2, t3).
            Verifico com condicionais quais são os que ganharam medalha de ouro, prata e bronze.
            Onde comparo um tempo com o outro, e qual for o menor em cada verificação, recebe a medalha correspondente.
            Depois imprimo a ordem dos vencedores das medalhas.
    */
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if (t1<t2 && t1<t3) {
        cout << "1\n";

        if (t2<t3) {
            cout << "2\n";
            cout << "3";
        } else {
            cout << "3\n";
            cout << "2";
        }
    } else if (t2<t1 && t2<t3) {
        cout << "2\n";

        if (t1<t3) {
            cout << "1\n";
            cout << "3";
        } else {
            cout << "3\n";
            cout << "1";
        }
    } else {
        cout << "3\n";

        if (t1<t2) {
            cout << "1\n";
            cout << "2";
        } else {
            cout << "2\n";
            cout << "1";
        }
    }
}
