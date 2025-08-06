#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float b,h, area;
    printf("Digite a base do triângulo: ");  
    scanf("%f", &b);
    printf("Digite a altura do triângulo: ");  
    scanf("%f", &h);

    area = (b * h) / 2; // Alternative formula for area of triangle: area = (b * h * 0,5);
    printf("A área do triângulo é: %.2f\n", area);

    return 0;

}