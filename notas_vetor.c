#include <stdio.h>
int main(){
    int largura, i=0;
    do{
        printf("Quantas notas deseja informar?\n");
        scanf("%d", &largura);
        if(largura < 2){
            printf("Quantidade de notas inválida! Tente novamente\n");
        }
    }while(largura < 2);
    float notas[largura], soma = 0;

    do{
        printf("Digite a %d nota: ", i+1);
        scanf("%f", &notas[i]);
        if(notas[i] >= 0 && notas[i] <= 10){
            i++;
        }else{
            printf("Nota Inválida! Tente novamente.\n");
        }
    }while(i<largura);
    printf("Suas notas foram: ");
    for(int j = 0; j < largura; j++){
        soma += notas[j];
        printf("%.1f ", notas[j]);
    }
    printf("\n");

    soma = soma / largura;
    if(soma >= 6){
        printf("Aprovado com nota %.1f",soma);
    }else{
        printf("Reprovado Com nota %.1f",soma);
    }
    printf("\n");

    return 0;
}