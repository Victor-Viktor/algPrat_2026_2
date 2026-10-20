#include <stdio.h>
int main(){
  /*int x[4]={0};
    int y=0;
    printf("%d \n",x[0]);
    printf("%d \n",y);
    printf("Looping \n");
    for(int i = 0; i<sizeof(x)/sizeof(x[0]);i++){
        //x[i]=0;
        printf("%d ", x[i]);
}*/

    enum { L = 4, C = 4 };
    int matriz[L][C] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {1, 9, 2, 6},
        {4, 8, 5, 3}
    }, aux, somal=0, somac=0;

    printf("matriz[2][1] = %d\n", matriz[2][1]);

    matriz[2][1] = 12;
    printf("matriz[2][1] = %d\n", matriz[2][1]);
    aux = matriz[3][1];
    matriz[3][1] = matriz[3][2];
    matriz[3][2] = aux;
    printf("matriz[3][1] %d ", matriz[3][1]);
    printf("matriz[3][2] %d ", matriz[3][2]);
    printf("\n");

    for(int i=0; i<L; i++){
        printf("\n%d ", matriz[i][3]);
    }
    for(int i=0; i<L; i++){
        printf("\n%d ", matriz[2][i]);
    }
    printf("\n todos os valores \n");
    for(int i=0; i<L; i++){
        
        for(int j = 0; j<C; j++){
            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }
    printf("SOMA LINHA:%d ", somal);
    printf("\nSOMA COLUNA:%d ", somac);
    return 0;
}