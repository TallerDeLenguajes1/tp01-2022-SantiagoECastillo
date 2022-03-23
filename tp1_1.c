#include <stdio.h>

int main(){
    int variablePrueba=3;
    int *pVariablePrueba;
    
    printf("Hola mundo\n");

    pVariablePrueba = &variablePrueba;

    printf("el contenido del puntero es: %d\n", *pVariablePrueba);
    printf("La direccion de memoria almacenada por el puntero es %p\n", pVariablePrueba);
    printf("La direccion de memoria de la variable: %p\n", &variablePrueba);
    printf("La direccion de memoria del puntero: %p\n", &pVariablePrueba);

    printf("Tamanio de memoria usado por la variable: %d", sizeof(variablePrueba));


    return 0;
}