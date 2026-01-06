/*
    Problema: Campo minado
    Fonte: OBI 2011 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveis, vetores, condicionais e operadores lógicos/aritméticos.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o valor da quantidade de células que existem no tabuleiro (n).
            Crio a variável "t", que é um vetor, representando o tabuleiro.
            "t" recebe a quantia de espaço equivalente ao valor de "n" (t[n]).
            Após isso, uso um loop for para fazer "t" receber todos os valores dos tabuleiro (repetindo o loop enquanto o valor de iteração "i" for menor que "n").
            Depois crio outro loop for para verificar as minas de cada célula do tabuleiro para saber quantas minas tem em seus arredores.
            Dentro do loop faço verificações sobre o valor anterior, atual e da seguinte célula do tabuleiro (t[i-1]; t[i]; t[i+1]).
            Em outro vetor (v) com tamanho "n", armazeno os valores das minas que existem nos arredores de cada casa.
            No fim, uso outro loop for para imprimir cada valor do vetor "v".
    */
    int n;
    cin >> n;
    int t[n];
    int v[n];

    for (int i=0; i<n; i++) {
        cin >> t[i];
    }
    for (int i=0; i<n; i++) {
        if (t[i-1]==1 && t[i]==0 && t[i+1]==1) {
            v[i] = 2;
        } else if (t[i-1]==0 && t[i]==0 && t[i+1]==1) {
            v[i] = 1;
        } else if (t[i-1]==1 && t[i]==0 && t[i+1]==0) {
            v[i] = 1;
        } else if (t[i-1]==0 && t[i]==0 && t[i+1]==0){
            v[i] = 0;
        } else if (t[i-1]==1 && t[i]==1 && t[i+1]==1) {
            v[i] = 3;
        } else if (t[i-1]==0 && t[i]==1 && t[i+1]==1) {
            v[i] = 2;
        } else if (t[i-1]==1 && t[i]== 1 && t[i+1]==0) {
                v[i] = 2;
        } else {
            v[i] = 1;
        }
    }
    for (int i=0; i<n; i++) {
        cout << v[i] << ' ';
    }
}
