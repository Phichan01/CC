#include <stdio.h>
int main (){
    int d, dia, m, mes, a, ano;
    scanf("%d", &dia);
    ano = dia/365;
    a = dia % 365;
    mes = a/30;
    d = a - ( mes * 30 );
    printf("%d ano(s)\n%d mes(s)\n%d dia(s)\n", ano, mes, d);
    return 0;
}