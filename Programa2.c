/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 2*/

#include <stdio.h>
#define PI 3.1416 
/*DEFINO A PI*/

int main() 
    {  
    float r, area, circun; //DECLARO 3 VARIABLES COMO FLOTANTES
    printf("...ESTE PROGRAMA CALCULA EL AREA Y CIRCUNFERENCIA DE UN CIRCULO...\n\n");
    printf("¿Cuál es el radio del círculo? ");
    scanf("%f", &r); //SE LEE EL RADIO COMO FLOTANTE
    area=PI*r*r; //SE OBTIENE EL AREA COMO PI POR RADIO AL CUADRADO
    circun=2*PI*r; // SE OBTIENE LA CIRCUNFERENCIA COMO 2PI POR RADIO
    printf("\n");
    printf("EL área del círculo es: %.2fu\n\n", area); //SE IMRPIME AREA
    printf("La circunferencia del círculo es: %.2fu\n", circun); //SE IMRPIME CIRCUN

    return 0;
}
