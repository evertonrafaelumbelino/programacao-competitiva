/*
    Problema: Reprovado, aprovado ou final
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, operadores aritméticos e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores das notas 1 e 2 (n1, n2), considerando o peso de cada uma sendo 2 e 3, respectivamente.
            Faço o cálculo da média levando em conta os pesos, o que faz a conta ser: (n1*2+n2*3)/5.
            Se a média (m) for >=7, Bino está aprovado; se for <3, está reprovado; e se não ser nenhum desses casos, ele está de prova final.
    */
    float n1, n2, m;
    cin >> n1 >> n2;
    m = (n1*2+n2*3)/5;

    if (m>=7) {
        cout << "Aprovado";
    } else if (m<3) {
        cout << "Reprovado";
    } else {
        cout << "Final";
    }
}
