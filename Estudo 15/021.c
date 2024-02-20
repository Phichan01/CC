#include <stdio.h>
#define MAX 100
    void Bulele (int vetx [], int tam){
        int aux;
        for (int i = 0; i < tam; i ++){
        printf ("Valor que vo da:\n");
        scanf ("%d", &aux);
        vetx [i] = aux;    
        }
        
    }















int main () {
    int vetx[MAX];
    int tam;
     printf ("Tamanho do meu vetor\n");
        scanf ("%d", &tam);
    Bulele (vetx, tam);
    
    for (int i = 0; i < tam; i ++){
        printf ("vetor[%d]: %d",i,vetx[i]);
        }
    
    