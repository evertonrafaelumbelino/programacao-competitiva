/*
    Problema: Aprovado ou reprovado
    Fonte: Neps Academy
    Técnica utilizada: Variáveis, operadores aritméticos, operadores lógicos e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores das duas notas enviadas (n1, n2) e calculo a média delas (m).
            Uso condicionais para verificar se o aluno está aprovado (m>=7), de recuperação (m>=4 e m<7) ou se foi reprovado (m<4).
    */
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
