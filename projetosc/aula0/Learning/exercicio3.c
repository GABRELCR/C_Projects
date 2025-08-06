#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int x, y;
    char op;

    printf("Digite a operação desejada (+, -, *, /): \n");
    scanf("%c", & op);

    printf("Digite o primeiro número: \n");
    scanf("%i", &x);

    printf("Digite o segundo número: \n");
    scanf("%i", &y);

    switch (op) {
        case '+':
            printf("%i + %i = %i\n", x, y, x + y);
            break;
        case '-':
            printf("%i - %i = %i\n", x, y, x - y);
            break;
        case '*':
            printf("%i * %i = %i\n", x, y, x * y);
            break;
        case '/':
            if (y != 0) {
                printf("%i / %i = %.1f\n", x, y, (float)x / y);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}