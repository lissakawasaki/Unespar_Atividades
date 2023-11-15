#include <stdio.h>

void Troca(int *num1, int *num2){

    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;

}

int main() {

    int num1, num2;


    printf("Insira o primeiro valor: \n");
    scanf("%d", &num1);

    printf("Insira o segundo valor: \n");
    scanf("%d", &num2);

    Troca(&num1, &num2);

    printf("Primeiro valor apos a troca: %d \n", num1);
    printf("Segundo valor apos a troca: %d \n", num2);
}
