#include <stdio.h>
#include <math.h>
    int main (){
    float a, b, c;
    printf ("entre com os catetos de um triangulo:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    c = sqrt (a*a+b*b);
    printf ("a hipotenusa é [%10.f]", c);
    return 0; 
    }