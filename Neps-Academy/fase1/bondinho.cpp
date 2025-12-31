/*
    Problema: Bondinho
    Fonte: OBI 2017 - Nível Júnior - Fase 1
    Técnica utilizada: Variáveis e condicionais
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica: Leio a quantia de alunos e monitores, depois uso estruturas condicionais (if-else) para verificar se é possível ou não levar todos eles, considerando que a capacidade máxima do bondinho são 50 pessoas
    */
    int a, m;
    cin >> a >> m;

    if (a+m > 50) {
        cout << "N";
    } else {
        cout << "S";
    }
}
