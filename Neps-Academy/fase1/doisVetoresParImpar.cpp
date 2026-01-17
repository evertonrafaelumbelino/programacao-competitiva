/*
    Problema: Dois vetores: Pares e ímpares
    Fonte: Neps Academy
    Técnicas utilizadas: Vetores, laços de repetição, condicionais e operadores de atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Crio as variáveis "v" (vetor de valores", "np" (números pares) e "ni" (número ímpares).
            Uso um loop for para ler os valores de entrada e os guardar em "v".
                Se o valor enviado for par eu faço "np" receber mais um (isso porque ele serve como um contador de número pares).
                Se o valor for ímpar eu "ni" recebe mais um (a mesma lógica do "np" mas para números ímpares).
            Depois crio as variáveis "vp" (vetor de pares), "vi" (vetor de ímpares), "auxp" (auxiliar par) e "auxi" (auxiliar ímpar).
                "vp" recebe como espaço o valor de "np" (números pares).
                "vi" recebe como espaço o valor de "ni" (números ímpares).
            Uso outro for para verificar os valores de "v" e os armazenar em "vp" se pares e "vi" se ímpares.
                "auxp" serve para auxiliar na contagem dos espaços de valores do "vp" e armazenar os valores corretamente.
                "auxi" faz o mesmo que o "auxp" só que para os valores ímpares em "vi".
            No fim, uso outros dois for para imprimir os valores dentro de "vp" e "vi" em linhas separadas.
    */
    int v[10], np=0, ni=0;

    for (int i=0; i<10; i++) {
        cin >> v[i];
        if (v[i]%2==0) {
            np++;
        } else {
            ni++;
        }
    }
    int vp[np], vi[ni], auxp=-1, auxi=-1;

    for (int i=0; i<10; i++) {
        if (v[i]%2==0) {
            auxp++;
            vp[auxp]=v[i];
        } else {
            auxi++;
            vi[auxi]=v[i];
        }
    }
    for (int i=0; i<np; i++) {
        cout << vp[i] << ' ';
    }
    cout << endl;
    for (int i=0; i<ni; i++) {
        cout << vi[i] << ' ';
    }
}
