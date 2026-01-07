/*
    Problema: Vogais e consoantes
    Fonte: Neps Academy
    Técnicas utilizadas: Strings, laço de repetição, condicionais e operadores lógicos/atribuição
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        Lógica:
            Crio as variáveis do tipo string "s (string), v (vogais), c (consoantes)".
            "s" recebe a string que será enviada.
            Uso um loop for para percorrer os caracteres da string "s" (onde o tamanho de "s" é usado na condição).
                Dentro do for, se o caracter da string (s[i]) for alguma das vogais, "v" recebe essas vogais.
                Se não o caracter não for uma vogal, então "c" recebe esses caracteres.
            No fim, imprimo as vogais (Vogais: x) e consoantes (Consoantes: x).
    */
    string s, v, c;
    cin >> s;

    for (int i=0; i<s.size(); i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            v += s[i];
        } else {
            c += s[i];
        }
    }
    cout << "Vogais: " << v << endl << "Consoantes: " << c;
}
