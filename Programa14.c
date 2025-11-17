/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con arreglos 2*/

#include <stdio.h>

int main() 
{
    int cant, i, N, cont=0; //DECLARO cant, UN INDICE i, N y UN CONTADOR cont COMO ENTEROS E INICIALIZO cont EN CERO
    
    printf("...ESTE PROGRAMA LEE UN ARREGLO UNIDEMENSION DE ENTEROS\n");
    printf("Y BUSCA CUANTAS VECES APARECE UN NUMERO DENTRO DEL ARREGLO...\n\n");
    printf("Ingresa la cantidad de elementos que tendra el arreglo: ");
    scanf("%d", &cant);
    printf("\n"); //SE LEE cant COMO ENTERO
    
    int arr[cant]; //DECLARO EL ARREGLO DE ENTEROS CON LOS ELEMENTOS GUARDADO EN cant

    for (i=0; i<cant; i++) //CON UN FOR PARA LEER LOS ELEMENTOS INICIALIZAMOS i en CERO, MENOR A cant Y INCREMENTA EN 1
        {
            printf("Ingresa el número para el elemento (%d) del arreglo: ", i);
            scanf("%d", &arr[i]); //SE LEEN LOS ELEMENTO DEL ARREGLO CON AYUDA DEL INDICE 
        }

    printf("\n¿Qué número deseas buscar? ");
    scanf("%d", &N); //SE LEE N EL NUMERO QUE SE VA A BUSCAR DESPUES DE HABER LLENADO EL ARREGLO

    for (i=0; i<cant; i++) //VOLVEMOS A PONER UN FOR PERO AHORA CON UN IF PARA LA CONDICION
        {
            if (arr[i]==N) //SI EL ELEMENTO DEL ARREGLO QUE NOS INDIQUE EL INDICE ES IGUAL AL NUMERO GUARDADO EN N VA A ENTRAR AL IF
                {
                    cont++; //CON UN CONTADOR, LO VAMOS A IR AUMENTANDO EN UNO PARA CONTAR CUANTAS VECES ESTA N EN EL ARREGLO
                }   
        }
    printf("El número aparece %d veces.\n", cont); //SE IMPRIME cont QUE ALMACENO CUANTAS VECES SE CUMPLIO LA CONDICION DEL IF

    return 0;
}
