#include <stdio.h>
int main(){
    int saida = 1, q=5;
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            //if(i==j || j==q-1-i)
            if(i==0 && j==0 || i==q-1 && j==q-1 || i==0 && j==q-1 || i==q-1 && j==0)
                printf("%02d ", saida);
            else
                printf("   ");
            saida++;
        }
        printf("\n");
    }
    return 0;
}