/*
    Problema: Fatorial
    Fonte: Neps Academy
    Técnicas utilizadas: Variáveis, laços de repetição, operadores aritméticos e operadores de atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Leio o número que for enviado (n).
            Uso ele no for para repetir a quantia de vezes necessárias para encontrar o valor de seu fatorial.
            Crio uma variável para guardar o valor total do fatorial (f) que é iniciada valendo 1, e uma para guardar o atual valor do fatorial (a).
            A cada iteração no for, "a" recebe n-i (sendo o valor enviado menos o valor da iteração).
            Faço "f" receber o ele mesmo multiplicado por "a" (f*=a). Pois assim faço "f" multiplicar ele mesmo com o valor da sequência do fatorial.
            No fim, imprimo o valor de f.
                Exemplo: se n=6 então, na primeira iteração a=6-0, valendo 6, e f=1*6, valendo 6.
                Segunda iteração fica a=5 e f=30. Terceira iteração a=4 e f=120.
                Quarta iteração a=3 e f=360. Quinta iteração a=2 e f=720. Sexta e última a=1 e f=720.
                Assim, imprimo "f", que nesse caso é 720.
    */
    int n, f=1, a;
    cin >> n;

    for (int i=0; i<n; i++) {
        a=n-i;
        f*=a;
    }
    cout << f;
}
