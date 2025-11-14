/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 3*/

#include <stdio.h>

int main() 
 {
    float dlrs, ps;
    
    printf("...ESTE PROGRAMA CONVIERTE DE DOLARES A PESOS...\n\n");
    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dlrs); //SE LEE COMO FLOTANTE A DOLARES
    printf("\n");
    ps=dlrs*11.96; //SE MULTIPLICAN LOS DOLARES POR EL VALOR DEL PESO
    printf("El equivalente en pesos es: %.2f\n", ps); //SE IMRPIME PS

    return 0;
}
