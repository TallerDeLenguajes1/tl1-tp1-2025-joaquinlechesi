#include <stdio.h>

int main()
{
    printf("hola mundo");

    //e)
    int numero = 1;
    int *p_numero = &numero;

    printf("\nEl contenido del puntero es: %p\n", p_numero); //1
    printf("\nLa direcion de memoria almacenada por el puntero es: %p\n", p_numero); //2
    printf("\nLa direcion de memoria de la variable es: %p\n", &numero); //3
    printf("\nLa direcion de memoria del puntero es: %p\n", &p_numero); //4
    printf("\nEl tamanio de memoria utilizado por la variable es: %zu\n", sizeof(numero)); //5
    
    return 0;
}
