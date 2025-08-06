#include <stdio.h>
#include <locale.h>

int var1 = 0;
int var2 = 0;

void modvar(int new1, int new2);
void imprimir();


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    imprimir();
    modvar(10, 20);
    imprimir();

    return 0;

}

void modvar(int new1, int new2) {
    var1 = new1;
    var2 = new2;
}

void imprimir() {
    printf("var1: %d, var2: %d\n", var1, var2);
}