#include <stdio.h>
#define x 2 
#define y  3
int main (){
    int mat1 [x] [y], mat2 [x] [y], i, j, mat3 [x] [y];
    for (i = 0; i < x; i ++){
        for (j = 0; j < y; j++ ){
    scanf ("%d", &mat1 [i] [j] );
    }
    
    }
    for (i= 0; i < x; i ++){
        for (j = 0; j < y; j++){
    scanf ("%d", &mat2 [i] [j]);
        }
 
    }
    for (i = 0; i < x; i ++){
        for (j = 0; j < y; j++){
    mat3 [i] [j] = mat1 [i] [j] + mat2 [i] [j];
    }
    }
    for (i = 0; i < x; i ++){
        for (j = 0; j < y; j++){
    printf ("%d ", mat3 [i] [j] );
        }
        printf ("\n");
    }
    return 0;
    
}
