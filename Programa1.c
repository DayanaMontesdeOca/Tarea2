/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 1*/

#include <stdio.h>

int main() 

{
    float N1, N2;
    printf("...ESTE PROGRAMA SUMA, RESTA Y MULTIPLICA DOS NÚMEROS...");
    printf("\n");
    printf("\n");
   
    printf("Ingresa el primer número: ");
    scanf("%f", &N1);
    
    printf("Ingresa el segundo número: ");
    scanf("%f", &N2);
    printf("\n"); 
   
    printf("La suma de ambos número es: %.2f\n", N1 + N2);
    printf("\n"); 
    
    printf("La resta del primer número menos el segundo es: %.2f\n", N1 - N2);
    printf("\n"); 
    
    printf("La resta del segundo número menos el primer es: %.2f\n", N2 - N1);
    printf("\n"); 
    
    printf("La multiplicacion de ambos números es: %.2f\n", N1 * N2);

    return 0;
}
