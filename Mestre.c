#include <stdio.h>
#include <stdlib.h>

int main (){

    int tabuleiro[10][10];
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3};
    int i, j;
    int cone[5][5];
    int cruz[5][5];
    int octa[5][5];

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
    
    for (i = 0; i < 3; i++){
        tabuleiro[linhav + i][colunav] = navio2[i];
    }

    for (i = 0; i < 3; i++){
        if(linhad1 + i <10 && colunad1 + i < 10 && tabuleiro[linhad1 + i][colunad1 + i] == 0)
            tabuleiro[linhad1 + i][colunad1 + i] = navio3[i];
    }

    for (i = 0; i < 3; i++){
        if(linhad2 + i <10 && colunad2 - i < 10 && tabuleiro[linhad2 + i][colunad2 - i] == 0)
            tabuleiro[linhad2 + i][colunad2 - i] = navio4[i];
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (i >= j && i + j >= 4)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

     for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (abs(i - 2) + abs(j-2) <= 2)
                octa[i][j] = 1;
            else
                octa[i][j] = 0;
        }
    }

    int ocone1 = 1, ocone2 = 1;
    int ocruz1 = 5, ocruz2 = 8;
    int oocta1 = 7, oocta2 = 3;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            int linha = ocone1 + i - 2;
            int coluna = ocone2 + j - 2;
            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(cone[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
        }

        for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            int linha = ocruz1 + i - 2;
            int coluna = ocruz2 + j - 2;
            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
        }

        for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            int linha = oocta1 + i - 2;
            int coluna = oocta2 + j - 2;
            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(octa[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
        }


    printf("===========================================");
    printf(" Tabuleiro Naval ");
    printf("===========================================");
    printf("\n");

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(tabuleiro[i][j] == 0)
                printf("~ ");
            else if (tabuleiro[i][j] == 3)
                printf("N ");
            else if (tabuleiro[i][j] == 5)
                printf("* ");

        }
        printf("\n");
    }
    
    printf("\nLegenda: ~ = Água | N = Navio | * = Habilidade\n");

    return 0;
}
