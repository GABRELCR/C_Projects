#include <stdio.h>
#include <locale.h>

int globalvar = 0;
int modificar(int value);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int value;

    printf("\nDigite um valor inteiro: ");
    scanf_s("%d", &value);

    globalvar = modificar(value);

    printf("\nO valor global modificado é: %d\n", globalvar);

    return 0;

}

int modificar(int value) {
    globalvar = value;
    return globalvar;
}