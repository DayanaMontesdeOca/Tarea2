/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 1*/

#include <stdio.h>

int main() 

{
    float N1, N2;
    printf("...ESTE PROGRAMA SUMA, RESTA Y MULTIPLICA DOS NÚMEROS...\n\n");   
    printf("Ingresa el primer número: ");
    scanf("%f", &N1);    
    printf("Ingresa el segundo número: ");
    scanf("%f\n", &N2); 
    printf("La suma de ambos número es: %.2f\n\n", N1 + N2); 
    printf("La resta del primer número menos el segundo es: %.2f\n\n", N1 - N2); 
    printf("La resta del segundo número menos el primer es: %.2f\n\n", N2 - N1);
    printf("La multiplicacion de ambos números es: %.2f\n", N1 * N2);

    return 0;
}
