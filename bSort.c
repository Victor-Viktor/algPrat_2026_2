#include <stdio.h>
int main(){
    int a = 6, b = 4, c = 2, d = 1, temp, ifs = 0;
    printf("Antes\n");
    printf("A = %d B = %d C = %d D = %d \n", a, b, c, d);

    if(a > b){
        temp = a;
        a = b;
        b = temp;
        ifs++;
    }

    if(b > c){
        temp = b;
        b = c;
        c = temp;
        ifs++;
    }

    if(c > d){
        temp = c;
        c = d;
        d = temp;
        ifs++;
    }

    if(a > b){
        temp = a;
        a = b;
        b = temp;
        ifs++;
    }

    if(b > c){
        temp = b;
        b = c;
        c = temp;
        ifs++;
    }

    if(a > b){
        temp = a;
        a = b;
        b = temp;
        ifs++;
    }

    printf("Depois\n");
    printf("A = %d B = %d C = %d D = %d \nIfs usados: %d \n", a, b, c, d, ifs);

    return 0;
}