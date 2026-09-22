#include <stdio.h>
int main(){
    int idade;

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    if(idade <= 0){
        printf("Idade inválida!");
    } else if (idade < 13){
        printf("Você não pode criar uma conta. idade mínima é 13 anos.");
    }else if(idade >= 13 && idade <= 17){
        printf("Você pode criar uma conta com o consentimento dos pais.");
    }else if( idade >= 18 && idade <= 64){
        printf("Você pode criar uma conta. Bem-vindo à nossa rede social!");
    }else{
        printf("Você pode criar uma conta. Lembre-se de verificar nossas configurações de privacidade.");
    }
    
    return 0;
}