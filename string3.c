#include <stdio.h>

int main()
{
    int temp = 0;
    char nome[31];

    printf("Digite um nome: ");
    scanf("%30s", nome);
    for(int i = 0; nome[i] != '\0';i++){
        temp++;
    }
    printf("\nNome digitado: %s", nome);
    printf("\nPrimeira letra do nome digitado: %c\n", nome[0]);
    printf("Quantidade de caracteres: %d\n",temp);

    return 0;
}