#include <stdio.h>

int main(){
    int a = 10, b = 5, c = 1, aux;

    if(b < a){
        aux = a;
        a = b;
        b = aux;
    }
    if(c < b){
        aux > b;
        b = c;
        c = aux;
    }
    if(b < a){
        aux = a;
        a = b;
        b = aux;
    }
    printf("A = %d B = %d C = %d\n", a, b, c);
    return 0;
}