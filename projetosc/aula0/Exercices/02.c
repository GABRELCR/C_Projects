#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("O código ASCII do caractere %c é %d.\n", c, c);
    // Exibe o caractere e o seu código ASCII correspondente

    return 0;

}