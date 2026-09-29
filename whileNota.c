#include <stdio.h>
int main(){
    int i = 0, notas, res = 1;
    float nx, soma, media;
    
    do{
        printf("Digite a quantidade de notas: ");
        scanf("%d", &notas);
        if(notas <= 0){
            printf("Quantidade incorreta\n");
        }
    }while(notas <= 0);

    while(i <= notas - 1){
        printf("Digite a nota: ");
        scanf("%f", &nx);
        if(nx >= 0 && nx <= 10){
            soma += nx;
            i++;
        }else{
            printf("Valor da nota inválido Tente novamente\n");
        }
    }
    media = soma / notas;
    printf("Média: %.1f\n", media);

    return 0;
}