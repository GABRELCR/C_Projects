#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int inteiro = 1;
    float real = 1.0;
    char caracter = 'a';
    double real2 = 1.25;

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caracter);
    printf("Real2: %.2lf\n", real2);

    return 0;

}