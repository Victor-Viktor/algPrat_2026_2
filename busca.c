#include <stdio.h>

int main()
{
    enum { L = 3, C = 3 };
    int matriz[L][C] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 50, 90}
    };
    int i, j, valor, achou = 0, ultimaL = 0, ultimaC = 0;

    printf("Valor procurado: ");
    scanf("%d", &valor);

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (matriz[i][j] == valor) {
                //printf("Encontrado na linha %d, coluna %d\n", i, j);
                achou = 1;
                ultimaL = i;
                ultimaC = j;
                //return 1;
            }
        }
    }

    if (achou == 0) {
        printf("Valor nao encontrado\n");
    } else {
        printf("Valor encontrado na linha %d, coluna %d\n", ultimaL, ultimaC);
    }

    return 0;
}