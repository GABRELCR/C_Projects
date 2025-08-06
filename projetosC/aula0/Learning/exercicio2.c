#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int x; 

    printf("Digite um número inteiro: \n");
    scanf("%i", & x);

    if (x % 2 == 0) {
        printf("O número %i é par.\n", x);
    } else {
        printf("O número %i é ímpar.\n", x);
    }

    return 0;

}