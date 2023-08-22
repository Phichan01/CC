#include <stdio.h>
int main () {
    double a, b, c;
    double d, e, f, g, h; //Questões
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (a * c) / 2; //A)
    e = 3.14159 * (c * c); //B)
    f = ((a + b) * c) / 2; //c)
    g = b * b; //d
    h = a * b; //e
    printf ("TRIANGULO: %.3lf\n", d);
    printf ("CIRCULO: %.3lf\n", e);
    printf ("TRAPEZIO: %.3lf\n", f);
    printf ("QUADRADO: %.3lf\n", g);
    printf ("RETANGULO: %.3lf\n", h);
    return 0;
}