#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int x; 
    x = 10; // ou pode ser direto (int x = 10;)

    x++; //x = x + 1; (x = 11)

    printf("Olá, mundo!\n");
    printf("O resultado da soma é %i", x);
    return 0;
}