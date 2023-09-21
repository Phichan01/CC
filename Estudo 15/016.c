#include <stdio.h>

int main () {
    int w, x, y;
    float z;
    scanf ("%d %d %d", &w, &x, &y);
    z = ((w*3)+(x*3)+(y*4))/10;
    printf ("Média final = %.2f", z);
    return 0;
}