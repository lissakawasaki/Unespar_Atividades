#include <stdio.h>
#include <stdlib.h>

float Media_3Notas(float nota1, float nota2, float nota3){

    return (nota1 + nota2 + nota3) / 3;

};

float Media_2Notas(float nota1, float nota2, float nota3){

    float menor_nota, media = 0;

    if (nota1 < nota2 ){
        menor_nota = nota1;
    } else {
        menor_nota = nota2;
    }
    if (nota3 < menor_nota){
        menor_nota = nota3;
    }

    media = (nota1 + nota2 + nota3 - menor_nota) / 2;

    return media;

}

void Nota_Alta(float nota1, float nota2, float nota3, float *maior_nota) {

    if (nota1 >= nota2 && nota1 >= nota3) {
        *maior_nota = nota1;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        *maior_nota = nota2;
    } else {
        *maior_nota = nota3;
    }
}

void Nota_Baixa(float nota1, float nota2, float nota3, float *menor_nota){

    if (nota1 <= nota2 && nota1 <= nota3) {
        *menor_nota = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3) {
        *menor_nota = nota2;
    } else {
        *menor_nota = nota3;
    }
}

int main() {

    float nota1, nota2, nota3;
    float media3 = 0, media2 = 0;
    float maior_nota, menor_nota;

    printf("Insira a primeira nota do boletim: \n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota do boletim: \n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota do boletim: \n");
    scanf("%f", &nota3);

    media3 = Media_3Notas(nota1, nota2, nota3);
    media2 = Media_2Notas(nota1, nota2, nota3);
    Nota_Alta(nota1, nota2, nota3, &maior_nota);
    Nota_Baixa(nota1, nota2, nota3, &menor_nota);


    printf("Média utilizando as três notas: %.1f \n", media3);
    printf("Média utilizando as duas maiores notas: %.1f \n", media2);
    printf("Maior nota: %.1f \n", maior_nota);
    printf("Menor nota: %.1f \n", menor_nota);

}