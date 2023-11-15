#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2;

    int *x = &num1;
    int *y = &num2;

    printf("Insira o primeiro valor: \n");
    scanf("%d", &num1);

    printf("Insira o segundo valor: \n");
    scanf("%d", &num2);


    if (num1 > num2){
        printf("Maior Endereço: %d \n Valor: %d\n", &num1, num1);
    } else {
        printf("Maior Endereço: %d \n Valor: %d\n", &num2, num2);
    }

}
