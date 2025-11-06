#include <stdio.h>

int main (){

    int tabuleiro[10][10];
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3};
    int i, j;

    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    int linhah = 8, colunah = 1;
    int linhav = 5, colunav = 7;
    int linhad1 = 1, colunad1 = 0;
    int linhad2 = 1, colunad2 = 9;

    for (j = 0; j < 3; j++){
        tabuleiro[linhah][colunah + j] = navio1[j];
    }
    
    for(i = 0; i < 3; i++){
        tabuleiro[linhav + i][colunav] = navio2[i];
    }

    for(i = 0; i < 3; i++){
        if(linhad1 + i <10 && colunad1 + i < 10 && tabuleiro[linhad1 + i][colunad1 + i] == 0)
            tabuleiro[linhad1 + i][colunad1 + i] = navio3[i];
    }

    for(i = 0; i < 3; i++){
        if(linhad2 + i <10 && colunad2 - i < 10 && tabuleiro[linhad2 + i][colunad2 - i] == 0)
            tabuleiro[linhad2 + i][colunad2 - i] = navio4[i];
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
