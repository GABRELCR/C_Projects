#include <stdio.h>
#include <locale.h>

void parOuImpar(int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int n;
        
    printf("\nDigite um número inteiro: ");
    scanf_s("%d", &n);

    parOuImpar(n);

    return 0;

}

void parOuImpar(int n) {
    if (n % 2 == 0) {
        printf("\nO número %d é par.\n", n);
    } else {
        printf("\nO número %d é ímpar.\n", n);
    }
}