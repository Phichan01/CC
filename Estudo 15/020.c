#include <stdio.h>
int main (){
    int x[9];
    for (int i = 0; i<9; i++) {
    x[i] = i;
    printf ("%d\n", x[i]);
    }
    return 0;
}