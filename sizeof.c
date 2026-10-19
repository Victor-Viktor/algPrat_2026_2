#include <stdio.h>
int main(){
    int x =10;
    float nota = 7.5;
    float notas[5];
    float moeda[] ={1.00, 0.50, 0.25, 0.10, 0.05, 1.50};
    int largura = sizeof(moeda) / sizeof(moeda[0]);

    printf("CHAR    : %zu byte\n",  sizeof(char));
    printf("INT     : %zu bytes\n", sizeof(int));
    printf("FLOAT   : %zu bytes\n", sizeof(float));
    printf("DOUBLE  : %zu bytes\n", sizeof(double));
    printf("X       : %zu bytes\n", sizeof(x));
    printf("NOTA    : %zu bytes\n", sizeof(nota));
    printf("NOTAS   : %zu bytes\n", sizeof(notas));
    printf("MOEDA   : %zu bytes\n", sizeof(moeda));

    printf("VALORES DE MOEDA\n");
    for(int i = 0; i < largura; i++){
        printf("%.2f ",moeda[i]);
    }
    printf("\n");
    return 0;
}