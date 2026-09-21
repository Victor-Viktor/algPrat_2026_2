#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número entre 1 e 6: ");
    scanf("%d" , &numero);

    switch (numero)
    {
        case 1:
        case 2:
            printf("Saí correndo, não da pra enfrentar!!");
            break;

        case 3:
        case 4:
            printf("Se esconda e aguarde reforços!!");
            break;

        case 5:
        case 6:
            printf("Bora enfrentar o boss!!");
            break;
        
        default:
            printf("Número inválido para o jogo!!");
    }

    return 0;
}