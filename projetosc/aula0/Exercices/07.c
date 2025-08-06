#include <stdio.h>
#include <locale.h>

// Função para limpar o buffer de entrada do teclado
void clearBuffer() {

    int k;

    while ((k = getchar()) != '\n' && k != EOF);

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int i, n;
    int j = 0;  
    char c;
    
    printf("\nDigite o número inteiro: ");
    scanf_s("%i", &i);
    clearBuffer();

    printf("\nDigite o caractere: ");
    scanf_s("%c", &c);
    clearBuffer();

    printf("\nQuantas vezes voce deseja incrementar o numero e o caractere? ");
    scanf_s("%d", &n);
    clearBuffer(); 

    // Loop para incrementar o número inteiro 'i' e o caractere 'c' 'n' vezes
    for (j = 0; j < n; j++) {
        i++;
        c++; 
    }

    printf("\nApos incrementar %d vezes, o valor inteiro é %d e o caractere é %c.\n", n, i, c); 

    return 0;

}