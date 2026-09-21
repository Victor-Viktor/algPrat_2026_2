#include <stdio.h>
int main(){
    int numero;
    printf("Digiete o número: ");
    scanf("%d", &numero);

    if(numero%2==0){
        printf("O número %d é PAR!\n", numero);
    }else{
        printf("O número %d é ÍMPAR!\n", numero);
    }
    
    return 0;
}