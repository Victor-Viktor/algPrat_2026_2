#include <stdio.h>

int main()
{
    enum {Q = 3};
    int zeros[Q][Q] = {0};   // o 0 vai na 1ª posição; as outras 8 também viram 0
    //char carct[3][3] = {0};
    //char carct[3][3] = {'\0'};
    int i, j;

    for (i = 0; i < Q; i++) {
        for (j = 0; j < Q; j++) {
            printf("%d ", zeros[i][j]);
        }
        printf("\n");
    }

    return 0;
}