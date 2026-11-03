#include <stdio.h>
int main(){
    //int x=3;
    char letra;
    enum {Q = 7};
    int matriz[Q][Q]={0};
    for(int i=0;i<Q;i++){
        for(int j=0;j<Q;j++){
           printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("%.*s\n", Q, "==========================");
    for(int i=0;i<Q;i++){
        for(int j=0;j<Q;j++){
            if(i==0 || i==j || j==Q-1-i || i==Q-1) printf("%d",matriz[i][j]);
            else printf(" ");     
        }
        printf("\n");
    }
    return 0;
}