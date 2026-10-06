#include <stdio.h>

int main(){
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 10; j++){
            if(i == 0 && j == 0){
                continue;
            }
            if(i == 2 && j == 6){
                break;
            }
            //if(j==6){
            //    return 1;
            //}


            if((j==7 || j==2) || (i == 0 &&(j>=6 && j<=10)))
            printf("%d%d ", i, j);
            
            
            if(j%5==0){
                printf("\n");
            }
        }
    }
    return 0;
}