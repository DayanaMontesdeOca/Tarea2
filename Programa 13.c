/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con arreglos 1*/

#include <stdio.h>

int main() 
{
    int cant, i, sum=0; //DECLARO UNA VARIABLE cant UN INDICE i Y sum COMO ENTEROS E INICIALIZO sum EN 0
    int arr[cant]; //DECLARO UN ARREGLO arr DE ENTEROS Y cant PARA LEER LOS ELEMENTOS DEL ARREGLO
    
    printf("...ESTE PROGRAMA SUMA LOS ELEMENTOS INGRESADOS\n");
    printf("       DE UN ARREGLO UNIDIMENSIONAL DE ENTEROS...\n\n");
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &cant); //SE LEE cant COMO ENTERO
    printf("\n");

    for (i=0; i<cant; i++) //CON UN FOR INICIALIZO A i COMO CERO, DONDE i TIENE QUE SER MENOR A cant Y VA A AUMENTAR EN UNO
        {
            printf("Ingresa el valor para el elemento (%d) del arreglo: ", i);
            scanf("%d", &arr[i]); //CUANDO SE ENTRA AL FOR SE VAN A IR LEYENDO TODOS LOS ELEMENTOS DEL ARREGLO CON EL INDICE 
        }

    for (i=0; i<cant; i++) //CON UN SEGUNDO FOR VUELVO A INICIALIZAR i EN CERO, i DEBE SER MENOR A cant Y VA A AUMENTAR EN UNO
        {
             sum=sum+arr[i]; //CUANDO SE ENTRA AL FOR SE VAN A IR SUMANDO LOS ELEMENTOS GUARDANDOSE EN sum 
        }
        
    printf("\nLa suma de los %d elementos es: %d\n", i, sum); //SE IMPRIME EL RESULTADO GUARDADO EN sum

    return 0;
}
