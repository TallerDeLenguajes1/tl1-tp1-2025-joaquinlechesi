#include <stdio.h>

int funcionCuadradoNumero(int numero); //a)
void procedimientoCuadradoNumero(int numero);  //b)
void direcConteido(int *numero);  //c)
void invertir(int *a, int *b); //d)
void orden(int *a, int *b); //e)

int main()
{
    
    int numero, resultado;
    puts("\tPUNTO a)\nIngrese un numero para obtener su cuadrado");
    scanf("%d", &numero);
    resultado = funcionCuadradoNumero(numero);
    printf("El cuadrado del numero calculado por es %d", resultado);
    puts("\n\tPUNTO b)\nIngrese un numero para obtener su cuadrado");
    scanf("%d", &numero);
    procedimientoCuadradoNumero(numero);
    puts("\n\tPUNTO c)");
    direcConteido(&numero);
    puts("\n\tPUNTO d)");
    int a, b;
    int p_a = &a;
    int p_b = &b;
    puts("\nIngrese el valor para la variable 'a'");
    scanf("\n%d", &a);
    puts("\nIngrese el valor para la variable 'b'");
    scanf("\n%d", &b);
    invertir(&a, &b);
    puts("\n\tPUNTO e)");
    puts("\nIngrese el valor para la variable 'a'");
    scanf("\n%d", &a);
    puts("\nIngrese el valor para la variable 'b'");
    scanf("\n%d", &b);
    orden(p_a, p_b);
    printf("\nEl valor de 'a' es: %d", a);
    printf("\nEl valor de 'b' es: %d", b);

    return 0;
}

int funcionCuadradoNumero(int numero){
    int resultado = numero * numero;
    return resultado;
}

void procedimientoCuadradoNumero(int numero){
    int resultado = numero * numero;
    printf("El cuadrado del numero calculado por es %d", resultado);
}

void direcConteido(int *numero){
    printf("La direccion de memoria de la variable recibida es: %p", numero);
    printf("\nEl contenido de la variable recibida es: %d", *numero);
}

void invertir(int *a, int *b){
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

void orden(int *a, int *b){
    int auxiliar;
    if (*a > *b)
    {
        auxiliar = *b;
        *b = *a;
        *a = auxiliar;
    }
}