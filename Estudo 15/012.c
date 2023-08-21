#include <stdio.h>
int main () {
    double salario, x;
    int y;
    scanf ("%lf", &salario);
    x = salario;
    if (salario >= 0 && salario <= 400){
        salario += 0.15 * salario;
        y = 15;
    }   else
    if (salario >= 400.01 && salario <= 800.00){
        salario = salario + 0.12 * salario;
        y = 12;
    }   else
    if (salario >= 800.01 && salario <= 1200.00){
        salario += 0.1 * salario;
        y = 10;
    }   else
    if (salario >= 1200.01 && salario <= 2000.00){
        salario += 0.07 * salario;
        y = 7; 
    }   else 
    if (salario > 2000.00){
        salario += 0.04 * salario;
        y = 4;
    }
    printf ("novo salario: %.2lf\n", salario);
    printf ("Reajuste ganho: %.2lf\n", salario - x);
    printf ("Em percentual: %d %%\n", y);
    return 0;
    }
