/*
    Problema: Gangorra
    Fonte: OBI 2014 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores das pessoas (p1, p2) e dos comprimentos dos lados da gangorra (c1, c2).
            Faço o seguinte cálculo para encontrar o valor do peso total de cada lado da gangorra: p1*c1 e p2*c2.
            Tendo esse valor, posso verificar com condicionais qual é o lado mais pesado e mais leve.
            Assim, podendo dizer se a gangorra está equilibrada (p1*c1==p2*c2), se está mais pesada a esquerda (p1*c2>p2*c2), ou se está mais pesada a direita (p1*c1<p2*c2).
    */
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;

    if (p1*c1==p2*c2) {
        cout << "0";
    } else if (p1*c1>p2*c2) {
        cout << "-1";
    } else {
        cout << "1";
    }
}
