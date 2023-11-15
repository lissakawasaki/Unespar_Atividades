#include <stdio.h>

int main() {

    int inteiro = 3;
    float real = 5;
    char caracter = 'a';

    int *i = &inteiro;
    float *r = &real;
    char *c = &caracter;

    printf("\n Valores anteriores: \n");
    printf("%d \n", inteiro);
    printf("%.1f \n", real);
    printf("%c \n", caracter);

    *i = 7;
    *r = 5.5;
    *c = 'c';

    printf("\n Valores atuais: \n");
    printf("%d \n", inteiro);
    printf("%.1sf \n", real);
    printf("%c \n", caracter);

    return 0;
}
