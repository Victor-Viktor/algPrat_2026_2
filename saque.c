
#include <stdio.h>

int main()
{
    int valor, n50, n20, n10, resto;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);
    
    if(valor%10==0){
        
        n50 = valor/50;
        resto = valor%50;
        
        n20 = resto/20;
        resto%=20; //resto = resto%20;
        
        n10 = resto/10;
        
        printf("Notas de 50: %d \nNotas de 20: %d \nNotas de 10: %d\n", n50,n20,n10);
    }else{
        printf("Transação impossível\n");
    }
        return 0;
}