/*
    Problema: Acelerador de partículas
    Fonte: OBI 2020 - Nível 2 - Primeira fase
    Técnica utilizada: Variáveis e operadores lógicos

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor em km percorrido pela partícula.
            Subtraio esse valor por 3, tirando a quantia inicial do acelerador de partículas (que é padrão em todos os casos).
            Depois divido o valor por 8, e pego o resto que sobrar.
            Com esse resto, basta subtrair por 2, assim encontrando o sensor.
            Resto 3: sensor 1 (3-2); resto 4, sensor 2 (4-2); resto 5: sensor 3 (5-2)
    */
    int d;
    cin >> d;
    d -= 3;
    d %= 8;
    cout << d-2;
}
