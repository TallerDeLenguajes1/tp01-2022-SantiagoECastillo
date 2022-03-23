#include <stdio.h>

int cuadradoV1(int numero);
void cuadradoV2(int *numero);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(){
    int numero1=2, numero2=4;

    numero1=cuadradoV1(numero1);
    cuadradoV2(&numero2);

    printf("Primer numero: %d\n", numero1);
    printf("Segundo numero: %d", numero2);

    return 0;
}

int cuadradoV1(int numero){
    numero=numero*numero;
    return numero;
}

void cuadradoV2(int *numero){
    *numero = (*numero) * (*numero);
}

void invertir(int a, int b){
    
}
