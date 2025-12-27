/*
    Problema: Média e mediana
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis e operadores lógicos
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio os valores de A e B.
            Como dito no enunciado, C deve ser o menor valor, e B é maior que A.
            Então a ordem ficaria C < A < B, sendo A o valor da média e mediana.
            Sabendo que a média é (A+B+C)/3, e a mediana é o valor do meio, consideramos que 3 x Mediana resulta na soma dos 3 valores.
            Um exemplo prático:
                Se A=6, B=10, para saber o valor de C que deve ser o menor possível, posso fazer A+B+C = 3 x Mediana.
                Tendo em mente que A é a mediana nesse exemplo, então a conta ficaria A+B+C = 3A.
                Isolando o valor de C, a conta final fica: C = 2A - B;
                Trocando os valores: C = 2x6 - 10; que passa para: C = 12 - 10; resultando em 2.
    */
    int a, b;
    cin >> a >> b;
    cout << 2*a-b;
}
