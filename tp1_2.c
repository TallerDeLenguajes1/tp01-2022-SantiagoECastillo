#include <stdio.h>

int cuadradoV1(int numero);
void cuadradoV2(int *numero);
void invertir(int *a, int *b);
void ordenar(int a, int b);

int main(){
    int numero1=2, numero2=4;

    numero1=cuadradoV1(numero1);
    cuadradoV2(&numero2);

    printf("Primer numero: %d\n", numero1);
    printf("Segundo numero: %d", numero2);

    invertir(&numero1, &numero2);
    printf("\n\nINVERTIMOS LO VALORES\n");
    printf("EL primer numero ahora es: %d\n", numero1);
    printf("EL segundo numero ahora es: %d\n", numero2);

    printf("\nOrdenamos los numeros\n");
    ordenar(numero1, numero2);
    
    return 0;
}

int cuadradoV1(int numero){
    numero=numero*numero;
    return numero;
}

void cuadradoV2(int *numero){
    *numero = (*numero) * (*numero);
}

void invertir(int *a, int *b){
    int auxiliar;

    auxiliar = *a;
    *a = *b;
    *b = auxiliar;

}

void ordenar(int a, int b){
    if(a > b){
        printf("%d es mayor que %d",a,b);
    }else{
        printf("%d es mayor que %d",b,a);
    }
}

