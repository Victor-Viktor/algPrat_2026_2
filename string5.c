#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    char nome[40];

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    getchar();                      // consome o \n que sobrou do scanf
    printf("Idade: ");
    scanf("%d", &idade);


    nome[strcspn(nome, "\n")] = '\0';

    printf("%s tem %d anos\n", nome, idade);

    return 0;
}