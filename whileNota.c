#include <stdio.h>
int main(){
    int i = 0, notas, n;
    float nx, soma, media;

    if(notas < 0){
        printf("Número de notas inválido");
        return 1;
    }

    printf("Digite a quantidade de notas: ");
    scanf("%d", &notas);
    while(i <= notas){
        scanf("Digite a nota %d");
        scanf("%f", &nx);
        soma += nx;
        i++;
    }
    media = soma / notas;
    printf("Média: %.1f", media);
}