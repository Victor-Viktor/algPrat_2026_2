#include <stdio.h>
int main(){
    float moeda[] ={1.00, 0.50, 0.25, 0.10, 0.05, 1.50};
    printf("%.2f %.2f %.2f %.2f %.2f %.2f ", moeda[0], moeda[1], moeda[2], moeda[3], moeda[4], moeda[5]);
    printf("\n");

    for(int i = 0; i < 6; i++){
        printf("%.2f ",moeda[i]+0.25);
    }
    printf("\n");

    /*for(int i = 0; i < 6; i++){
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &moeda[i]);
    }
        for(int i = 0; i < 6; i++){
        printf("%.2f ",moeda[i]);
    }

    printf("\n");*/
    return 0;
}