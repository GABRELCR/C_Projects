#include <stdio.h>
#include <locale.h>

int sum(int a, int b); // Function for sum

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    int result = sum(a, b);

    printf("A soma de %d + %d = %d\n", a, b, result);

    return 0;

}

int sum(int a, int b) {
    int res;

    res = a + b;

    return res; //alternatively, you could use return a + b;
}