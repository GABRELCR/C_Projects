#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num1, num2, num3;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1); 
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    media = (float) (num1 + num2 + num3) / 3.0; // Calcula a média aritmética

    printf("A média aritmética é: %.2f\n", media);

    return 0;

}