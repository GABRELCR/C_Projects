#include <stdio.h>
#include <locale.h>

int pp(int x); // Aviso da função

int main(){
    setlocale(LC_ALL,"Portuguese");

    int x,result,v;

    printf("Digite um número inteiro: \n");
    scanf("%i", & x);

    result = pp(x); // Chamada da função e retorno do resultado

    printf("O número %i é %i", x, result);

    return 0;
}

int pp(int x){

    if (x % 2 == 0) {
            return 1; // Par
        } else {
            return 0; // Ímpar
        }
        
}