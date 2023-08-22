#include <stdio.h>
int main () {
    int p1, p2, p4, p5;
    float p3, p6;
    scanf ("%d %d %f", &p1, &p2, &p3);
    scanf ("%d %d %f", &p4, &p5, &p6);
    printf("VALOR A PAGAR: R$ %.2f\n", p2 * p3 + p5 * p6);
    return 0;
}
