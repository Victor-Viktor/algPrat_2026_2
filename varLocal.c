#include <stdio.h>

int g_total = 0, g_loop =0; // variável global

void acumular(int valor){
    int temp = valor * 2; // variável local, só existe dentro da função
    g_total += temp;
}

void loop(int valor){
    int i;
    for(i = 0; i <= valor; i++){
        printf("%d ",valor-i);
    }
    g_loop = i;
    printf("\n");
}

void loop1(int valor, int passo){
    int i = 0, count = 0;
    if(valor < 0 || passo <= 0){
        printf("Valor inválido, tente novamente!");
    }
    printf("1) valor inicial: %d\n", i);
    printf("2) condição i <= Valor\n");
    printf("3) Contador i += passo\n");

    for(i = 0; i <= valor; i+=passo){
        printf("%d ",i);
        count++;
    }
    
    printf("\n");
    printf("4) Executou %d vezes\n", count);
    printf("5) O valor %d tornou a condição falsa", i);
    printf("\n");
}


int main(void){
    int x = 5; //variável local

    acumular(x);
    printf("Total: %d\n", g_total); // Será que funciona?

    // printf("%d", temp); // Será que funciona
    loop(4);
    printf("%d \n", g_loop);
    loop1(10,-1);
    return 0;
}