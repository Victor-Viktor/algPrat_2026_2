#include <stdio.h>
int main(){
    int k = 1, somal = 0, somac = 0;
    int m[3][4];
    for (int i = 0; i < 3;i++){
        for(int j = 0; j < 4; j++){
            m[i][j] = k++;
            printf("%02d ", m[i][j]);
            if(i==1)
                somal += m[1][j];
            if(j==1)
                somac += m[i][1];     
        }
        printf("\n");
    }

    printf("SOMA LINHA: %d \n", somal);
    printf("SOMA COLUNA: %d \n", somac);
    return 0;
}