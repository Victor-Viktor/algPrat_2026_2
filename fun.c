#include <stdio.h>

void exibirNome(char nome[]){
    printf("%s \n", nome);
}

int obterNumero(){
    return 42;
}

int soma (int a, int b){
    return a+b;
}

void parImpar (int a){
    if(a % 2 == 0){
        printf("%d É par\n", a);
        return 0;
    }
    printf("%d É Ímapar\n", a);
}
int main (){
    //exibirNome("João");
    //exibirNome("Maria");

    int x = obterNumero();
    printf("Valor de X: %d \n", x);
    printf("Valor de X: %d \n", obterNumero());

    int resultadoSoma = soma(3, 2);
    printf("Resultado da soma: %d \n", resultadoSoma);
    printf("Resultado da soma: %d \n", soma(7, 3));

    parImpar(7);
    parImpar(4);
    parImpar(5);
    parImpar(66);

    return 0;
}