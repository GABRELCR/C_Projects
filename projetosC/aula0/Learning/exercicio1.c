#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int x, y, res; // Pode escrever separado tbm (int x; int y; int res;)

    printf("Digite um número inteiro: \n");
    scanf("%i", & x);

    printf("Digite outro número inteiro: \n");
    scanf("%i", & y);

    res = x + y;

    printf("O resultado da soma de %i com %i é %i \n", x, y, res);
    // printf("O resultado da soma de %i com %i é %i", x, y, x+y);

    return 0;

}