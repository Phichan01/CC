#include <stdio.h>
int main (){
    float x, y;
    printf("entre com dois numeros reais:\n");
    scanf("%f %f", &x, &y);
    printf("soma = (%.2f)\n", x + y);
    return 0;
}