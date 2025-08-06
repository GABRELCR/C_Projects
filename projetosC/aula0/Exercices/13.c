#include <stdio.h>
#include <locale.h>

void incrementstatic();
void incrementauto();

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    incrementstatic();
    incrementstatic();
    incrementstatic();

    incrementauto();
    incrementauto();
    incrementauto();

    return 0;
}

void incrementstatic() {
    static int num = 0;
    num++;
    printf("Valor atual de num (Estático): %d\n", num);
}

void incrementauto() {
    int num = 0;
    num++;
    printf("Valor atual de num (Automático): %d\n", num);
}