#include <math.h>
#include <stdio.h>
int main() {
    float a, b;
    printf("entre com um numero real:\n");
    scanf("%f", &a);
    b = sqrt(a);
    printf ("a raiz quadrada e (%.5f)", b);
    return 0;
}