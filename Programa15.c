/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con arreglos 3*/
#include <stdio.h>

int main() 
{
    int N, i; //DECLARO UNA VARIABLE N Y UN INDICE i COMO ENTEROS
    int positivos=0, negativos=0, nulos=0; //INICIAlIZO 3 VARIABLES EN CERO QUE SERVIRAN COMO CONTADORES
    
    printf("...ESTE PROGRAMA DETERMINA CUANTOS ELEMENTOS POSITIVOS\n");
    printf("NEGATIVOS Y NULOS HAY EN UN ARREGLO UNIDIMENSIONAL DE ENTEROS...\n\n");
    printf("Cuantos elementos tendra el arreglo? ");
    scanf("%d", &N); //SE LEE EL NUMERO DE ELEMENTOS N COMO ENTERO
    printf("\n");

    int arr[N]; //DECLARAMOS UN ARREGLO DE ENTEROS CON ELEMENTOS N LEIDOS

    for (i=0; i<N; i++) //CON UN FOR VAMOS A LEER LOS ELEMENTOS DEL ARREGLO
                        //CON i IGUAL A CERO, i MENOR A N Y AUMENTA EN UNO
        {
          printf("Ingresa el número para el elemento (%d) del arreglo: ", i);
          scanf("%d", &arr[i]); //SE LEEN LOS ELEMENTOS DEL ARREGLO CON EL INDICE i
         }
    
    for (i=0; i<N; i++) //CON UN FOR VAMOS A ENTRAR A LOS IF ANIDADOS, CON CXADA ELEMENTO DEL ARREGLO
        {
            if (arr[i]>0) //SI EL ELEMENTO DEL ARREGLO ES MAYOR A CERO SE ENTRA EN EL PRIMER IF
              {
                  positivos++; //SI ES MAYOR A CERO AUMENTA positivos EN UNO
              }
           else //SI NO ES MAYOR A CERO ENTRA AL ELSE
             {  if (arr[i]<0) //SI EL ELEMENTO DEL ARREGLO ES MENOR A CERO SE ENTRA AL SEGUNDO IF
                  {
                     negativos++; //SI ES MENOR A CERO negativos AUMENTA EN UNO
                  }
                else //SI TAMPOCO ES MENOR A CERO SE ENTRA AL ELSE
                  {
                     nulos++; //COMO NO ES MAYOR NI MENOR A CERO ENTONCES SE AUMENTA EN UNO A nulos
                  }
             }
    }
    printf("\n");
    printf("La cantidad de elementos positivos es: %d\n", positivos); //SE IMPRIME EL CONTADOR positivos
    printf("La cantidad de elementos negativos es: %d\n", negativos); //SE IMPRIME EL CONTADOR negativos
    printf("La cantidad de elementos nulos es: %d\n", nulos); //SE IMPRIME EL CONTADOR nulos

    return 0;
}
