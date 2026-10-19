#include <stdio.h>
int main(){
    int largura, maior, menor, cont = 0;
    do{
        printf("Quantos valores serão digitados?\n");
        scanf("%d", &largura);
        if(largura < 2){
            printf("Valor inválido ou muito baixo.\n");
        }
    }while (largura < 2);

    int num[largura];
    do{
        printf("Digite o %d número: ", cont+1);
        scanf("%d", &num[cont]);
        cont++;
    }while(cont<largura);
    menor = num[0];
    maior = num[0];
    printf("Números digitados: ");
    for(int i = 0; i < largura; i++){
        if(num[i]>maior){
            maior = num[i];
        }
        if(num[i]<menor){
            menor = num[i];
        }
        printf("%d ",num[i]);
    }

    printf("\n");
    printf("Maior: %d\n", maior);
    printf("Menor %d\n", menor);

    return 0;

}