#include <stdio.h>
char vogal[] = "aiueoAIUEO";
int eVogal(char letra){
    if(letra == '\0'){
        return 2;
    }
    for(int i = 0; i< sizeof(vogal);i++){
        if(letra == vogal[i])
        return 1;
    }

    return 0;
}


int main()
{
    char palavra[] = "Uninove";

    printf("%c\n", palavra[2]);     // terceiro caractere
    //palavra[0] = 'u';               // troca o U por u
    printf("%s\n", palavra);

    for(int i = 0; i<sizeof(palavra); i++){
        if(eVogal(palavra[i])==1){
            printf("%c - VOGAL\n",palavra[i]);
            continue;
            }else if(eVogal(palavra[i])==0){
                printf("%c - CONSOANTE\n",palavra[i]);
            }
    }

    return 0;
}

