/*
    Problema: Basquete de robos
    Fonte: OBI 2018 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, condicionais e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor da distância do robo entre a cesta (d).
            Verifico com base na distância quantos pontos o robo ganhou.
            Se a distância for <= 800, vale 1 ponto; >800 e <=1400, vale 2 pontos; >1400 e <= 2000, vale 3 pontos.
            Depois imprimo quantos pontos o robo fez no lançamento.
    */
    int d;
    cin >> d;

    if (d<=800) {
        cout << "1";
    } else if (d>800 && d<=1400) {
        cout << "2";
    } else {
        cout << "3";
    }
}
