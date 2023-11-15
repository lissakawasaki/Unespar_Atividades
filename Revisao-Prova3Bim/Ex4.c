#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Livro {

    char nome[50];
    char editora[50];
    char isbn[15];
    int ano_de_edicao;
    int numero_paginas;
    float preco;

};

typedef struct Livro livro;

int main(){

    setlocale(LC_ALL, "Portuguese");

    livro l[5];

    for(int i = 0; i < 5; i++){

        fflush(stdin);
        printf("Insira o nome do livro: \n");
            scanf("%s", &l[i].nome);

        fflush(stdin);
        printf("Insira a editora do livro: \n");
            scanf("%s", &l[i].editora);

        fflush(stdin);
        printf("Insira a isbn do livro: \n");
            scanf("%s", &l[i].isbn);

        fflush(stdin);
        printf("Insira o ano de edição: \n");
            scanf("%d", &l[i].ano_de_edicao);

        fflush(stdin);
        printf("Insira o número de páginas: \n");
            scanf("%d", &l[i].numero_paginas);

        printf("Insira o preço do livro: \n");
            scanf("%f", &l[i].preco);
    }

    int media = 0;
        for(int i = 0; i < 5; i++){
            media += l[i].numero_paginas;
        }

    printf("Média das páginas dos livros: %d", media / 5);
}