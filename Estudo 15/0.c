#include <stdio.h>
    int main () {
        int x, y, z;
        printf ("Entre com um número inteiro");
        scanf ("%d %d", &x, &y);
        z = x * y;
        printf ("A multiplicação de: %d * %d = %d", x, y, z);
        return 0;
    }
