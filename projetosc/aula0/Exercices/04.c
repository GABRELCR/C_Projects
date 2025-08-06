#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Tabuada do %d!\n", num);

   // Loop 'for' para calcular a tabuada do número digitado
    for (i = 1; i <= 10; i++) {
    // Exibe a multiplicação do número digitado pelo contador do loop
    printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;

}