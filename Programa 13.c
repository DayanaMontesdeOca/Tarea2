/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con arreglos 1*/

#include <stdio.h>

int main() 
{
    int cant, i, sum=0;
    int arr[cant];
    
    printf("...ESTE PROGRAMA SUMA LOS ELEMENTOS INGRESADOS\n");
    printf("       DE UN ARREGLO UNIDIMENSIONAL DE ENTEROS...\n\n");
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &cant);
    printf("\n");

    for (i=0; i<cant; i++) 
        {
            printf("Ingresa el valor para el elemento (%d) del arreglo: ", i);
            scanf("%d", &arr[i]);
        }

    for (i=0; i<cant; i++) 
        {
             sum=sum+arr[i];
        }
        
    printf("\nLa suma de los %d elementos es: %d\n", i, sum);

    return 0;
}
