#include <stdio.h>

int main() {

    int num1, num2;

    int *x = &num1;
    int *y = &num2;

    if (num1 > num2){
        printf("%d tem o maior endereço. ", &num1);
    } else {
        printf("%d tem o maior endereço. ", &num2);
    }

}
