#include <stdio.h>

int main (){

    int tabuleiro[10][10];
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int i, j;

    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    int linhah = 8, colunah = 5;
    int linhav = 2, colunav = 3;

    for (j = 0; j < 3; j++){
        tabuleiro[linhah][colunah + j] = navio1[j];
    }
    
    for(i = 0; i < 3; i++){
        tabuleiro[linhav + i][colunav] = navio2[i];
    }

    printf("===========================================");
    printf(" Tabuleiro Naval ");
    printf("===========================================");
    printf("\n");

    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d", tabuleiro[i][j]);

        }
        printf("\n");
    }

    return 0;
}
