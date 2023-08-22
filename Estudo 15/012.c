#include <stdio.h>

int main() {
    double salario, novoSalario, reajuste;
    int indiceReajuste;

    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 400.00) {
        indiceReajuste = 15;
        reajuste = 0.15 * salario;
    } else if (salario <= 800.00) {
        indiceReajuste = 12;
        reajuste = 0.12 * salario;
    } else if (salario <= 1200.00) {
        indiceReajuste = 10;
        reajuste = 0.10 * salario;
    } else if (salario <= 2000.00) {
        indiceReajuste = 7;
        reajuste = 0.07 * salario;
    } else {
        indiceReajuste = 4;
        reajuste = 0.04 * salario;
    }

    novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", indiceReajuste);

    return 0;
}
