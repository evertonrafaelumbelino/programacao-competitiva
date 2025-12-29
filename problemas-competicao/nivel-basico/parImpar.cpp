/*
    Problema: Par ou impar
    Fonte: OBI 2004 - Nível Júnior - Fase 1
    Técnicas utilizadas: Variáveise e condicionais
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio a quantia de dedos que cada um dos jogadores mostrou (a, b).
            Uso condições para verificar se a soma dos valores é par (a+b%2==0) ou impar(a+b%2!=0).
            Verifico com o resto que sobrar na divisão do valor total por 2. Se sobrar 0, o número é par; se sobrar outro valor diferente de 0, o número é impar.
            Alice sempre escolhe par, e Bob impar.
    */
    int a, b;
    cin >> a >> b;

    if ((a+b)%2==0) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
}
