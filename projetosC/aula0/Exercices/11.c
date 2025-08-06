#include <stdio.h>
#include <locale.h>

void incrementarStatic();

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    // Chama a função 'incrementarStatic'
    incrementarStatic();
    // Chama novamente a função 'incrementarStatic'
    incrementarStatic();
    // Chama mais uma vez a função 'incrementarStatic'
    incrementarStatic(); 

    return 0;

}

// Definição da função 'incrementarStatic'
void incrementarStatic() {

    // Variável estática 'num' que mantém seu valor entre chamadas
    static int num = 0;

    // Incrementa o valor da variável estática 'num'
    num++;

    // Imprime o valor atual da variável estática
    printf("Valor atual da variável estática: %d\n", num);

}
