#include <stdio.h>
#include <stdlib.h>

void ler_matriz (char mat[3][4]){
    int tam1 = 3, tam2 = 4;
    for ( int i = 0; i < tam1; i ++){
        for ( int j =0; j < tam2; j++){
            mat[i][j]='-';
            printf (" %c ", mat[i][j]);
        }
    
        printf ("\n");
    } 
}

void encher_matriz (char mat [3] [4]){
    int x, y;
    int tam1 = 3, tam2 =4;

    scanf ("%d %d", &x, &y);
    while ( x > 3 || y > 4) {
        printf ("digite novamente\n");
        scanf ("%d %d", &x, &y);
    }
    system ("clear");
    printf ("Tabuleiro %dx%d:\n", tam1, tam2);
    mat [x-1] [y-1] = 'X';
    
    for ( int i = 0; i < tam1; i++){
        for (int j = 0; j< tam2; j++){
            printf(" %c ", mat[i][j]);
        }
        printf ("\n");
    }
}

int main (){

    int tam1 = 3, tam2 =4;
    char mat [tam1][tam2];


    printf ("Tabuleiro %dx%d:\n", tam1, tam2);

    ler_matriz (mat);
    encher_matriz (mat);
 
    return 0;
}   