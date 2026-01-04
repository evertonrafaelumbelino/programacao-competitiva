/*
    Problema: Consecutivos
    Fonte: OBI 2012 - Nível 1 - Fase 1
    Técnicas utilizadas: Variáveis, condicionais, laços de repetição e operadores de atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio a quantia de valores que foram sorteados (n).
            Uso ele na condição do laço de repetição for, para determinar a quantia de repetições do loop.
            Uso uma condição que determinará a "primeira" iteração, para que não haja erro nos cálculos futuros.
            Sempre somando +1 a variável dos pontos (p), que guarda todos os valores enviados e que poderiam ser possívels pontos.
            Após a primeira iteração, leio o valor atual (a) e verifico se ele é diferente do último (u).
                Se for, adiciono +1 a uma variável auxiliar (aux).
                Se o valor atual não for diferente do último (ou seja, se forem iguais), apenas guardo o último número que foi lido (u).
            Ao final do loop, "p" está com a quantia de números que foi enviada (no caso, p==n), e o "aux" com a quantia de vezes que os números foram alterados.
            No fim, imprimo o valor de "p/aux", pois assim consigo encontrar quantas vezes apareceu o mesmo número mais vezes.
                Exemplo: 11 valores enviados, sendo 3 vezes seguidas 30, 5 vezes seguidas 40 e outras 3 vezes seguidas 30;
                então repete o loop 11 vezes, assim ficando p==11 e aux=2, porque foi trocado de números 2 vezes (do 30 para o 40 e do 40 para outro 30);
                Ao imprimir a divisão de "p" por "aux", nesse caso, temos 11/2, que resulta em 5 (divisão inteira).
                Sendo essa a resposta final e correta. Servindo para qualquer outro caso.
    */
    int n, a=-1, u=-1, p=0,aux=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        if (a==-1 && u==-1) {
            cin >> a;
            u = a;
            p++;
        } else {
            cin >> a;
            if (a!=u) {
                aux++;
                u = a;
                p++;
            } else {
                u = a;
                p++;
            }
        }
    }
    cout << p/aux;
}
