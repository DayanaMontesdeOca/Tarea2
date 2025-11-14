/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 1*/

#include <stdio.h>

int main() 

{
    float N1, N2; //DECLARO DOS VARIABLES COMO FLOTANTES
    printf("...ESTE PROGRAMA SUMA, RESTA Y MULTIPLICA DOS NÚMEROS...\n\n");   
    printf("Ingresa el primer número: ");
    scanf("%f", &N1);   //SE LEE EL PRIMER NUMERO FLOTANTE
    printf("Ingresa el segundo número: ");
    scanf("%f", &N2);  //SE LEE EL SEGUNDO NUMERO FLOTANTE
    printf("\n");
    printf("La suma de ambos número es: %.2f\n\n", N1 + N2); //SE IMRPIME LA SUMA DE N1 MAS N2
    printf("La resta del primer número menos el segundo es: %.2f\n\n", N1 - N2); //SE IMPRIME LA RESTA DE N1 MENOS N2
    printf("La resta del segundo número menos el primer es: %.2f\n\n", N2 - N1); //SE IMPRIME LA RESTA DE N2 MENOS N1
    printf("La multiplicacion de ambos números es: %.2f\n", N1 * N2); //SE IMRPIME LA MULTIPLICACION DE N1 POR N2

    return 0;
}
