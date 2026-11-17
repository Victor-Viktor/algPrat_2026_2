#include <stdio.h>

int main()
{
    char palavra[8] = "Uninove";
    char outra[8] = {'U', 'n', 'i', 'n', 'o', 'v', 'e', '\0'};

    printf("palavra: %s\n", palavra);
    printf("outra: %s\n", outra);
    printf("Terceiro caractere: %c\n", palavra[2]);

    return 0;
}