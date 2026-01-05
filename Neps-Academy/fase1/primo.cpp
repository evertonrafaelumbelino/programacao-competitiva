/*
    Problema: Primo
    Fonte: Neps Academy
    Técnicas utilizadas
*/
#include <iostream>
using namespace std;

/*
    Lógica:
        Nesse exercício eu apenas preciso fazer o código da função (eh_primo).
        Função essa que recebe um valor inteiro (x), e que deve retornar um valor booleano falando se esse valor é primo ou não.
        Para isso, basta pegar o valor (x) e dividir ele por 2.
        Se a divisão sobrar resto, ele é um número primo.
        Se não sobrar resto, não é um número primo.
        Isso se deve porque um valor primo so é divisível por 1 e por ele mesmo.
        No entanto, temos o número 2, que é o único número primo par, que nesse caso, daria erro na lógica.
        Então por isso, uso uma condição que verifica se o valor de x=2; se for esse o caso, o retorno é "true" obrigatoriamente.
*/

bool eh_primo(int x){
	if (x==2) {
        return true;
	} else {
        if (x%2==0) {
            return false;
        } else {
            return true;
        }
	}
}

int main(){
	int x;
	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
