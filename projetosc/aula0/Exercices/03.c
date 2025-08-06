#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num1, num2, sum, meno, prod, div;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    meno = num1 - num2;
    prod = num1 * num2;
    div = (float)num1 / num2;

    printf("Soma: %d\n", sum); // Alternative: printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", meno); // Alternative: printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", prod); // Alternative: printf("Multiplicação: %d\n", num1 * num2);
    printf("Divisão: %d\n", div); // Alternative: printf("Divisão: %d\n", num1 / num2);

    return 0;

}