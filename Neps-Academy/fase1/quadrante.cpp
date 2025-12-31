/*
    Problema: Quadrante
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores de X e Y, que podem ser >0, <0 ou ==0.
            Com base nos valores deles, verifico com condicionais qual quadrante eles representam.
            Sendo Q1 no topo a direita; Q2 no topo a esquerda; Q3 em baixo a esquerda; e Q4 em baixo a direita.
            Se X ou Y forem iguais a zero, vai ser considerado no plano cartesiano que está nos eixos.
    */
    int x, y;
    cin >> x >> y;

    if (x>0 && y>0) {
        cout << "Q1";
    } else if (x<0 && y>0) {
        cout << "Q2";
    } else if (x<0 && y<0) {
        cout << "Q3";
    } else if (x>0 && y<0) {
        cout << "Q4";
    } else {
        cout << "eixos";
    }
}
