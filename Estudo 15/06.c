#include <stdio.h>
int main (){
    int d, dia, m, mes, ano, a;
    scanf("%d", &dia);
    a = dia/365;
    ano = dia % 365;
    mes = ano/30;
    dia = ano - (mes * 30);
    printf ("%d ano(s)\n, %d mes(es)\n, dia(s)\n", a, mes, dia);
    return 0;
}