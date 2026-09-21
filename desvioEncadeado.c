#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número entre 1 e 6: ");
    scanf("%d", &numero);

    if(numero < 1 || numero > 6){
        printf("Número inválido para o jogo!");
    }else{
        if(numero >= 5){
            printf("Bora enfrentar o BOSS!!");
        }else if(numero < 3){
            printf("Saí correndo, não dá pra enfrentar!!");
        }else{
            printf("Se esconda e aguarde reforços!!");
        }
    }

    return 0;
}