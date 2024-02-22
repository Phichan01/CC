#include <stdio.h>
int main (){
    int tam1 = 3, tam2 =4;
    
    char mat [tam1][tam2];
    printf ("Tabuleiro %dx%d:\n", tam1, tam2);
    for ( int i = 0; i < tam1; i ++){
        for ( int j =0; j < tam2; j++){
            mat[i][j]='-';
            printf (" %c ", mat[i][j]);
        }
    
        printf ("\n");
    }
    return 0;
}