#include<stdio.h>

int main(){
    for(int i = 0; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    int trig;
    for(int i = 0; i <= 10; i++){
        trig = i+1;
        if(i%2==0)
            printf("%d ", i);
    }
    printf("\n%d", trig);
    printf("\n");

    for(int i = 0; i <= 10; i++){
        if(!(i>=3 && i<=7)){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}