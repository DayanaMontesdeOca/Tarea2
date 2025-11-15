/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Estructuras Repetitivas FOR, WHILE.. 2*/

#include <stdio.h>

int main() 
{
    int n, i; //DECLARO COMO ENTERO A CONTADOR i Y A n
    int positivos=0, negativos=0, nulos=0; //DECLARO 3 VARIABLES ENTERAS QUE USARE COMO 
                                           //CONTADORES PARA CADA CLASIFICACIÓN Y LOS INICIALIZO EN 0
    
    printf("...ESTE PROGRAMA INDICA LOS NÚMERO POSITIVOS NEGATIVOS Y NULOS...\n");
    printf("           ...DE 100 NÚMEROS NATURALES LEIDOS...\n\n");
    
    for (i=1; i<101; i++) //USO UN FOR PARA USAR EL CONTADOR Y QUE LEA 100 NUMEROS i 
                         //SE INCIALIZA EN 1 HASTA QUE SEA MENOR A 101 Y SE AUMENTA EN UNO
      {
            printf("Ingresa el numero natural (%d): ", i); //IMPRIMO EL NUMERO EN EL QUE SE ENCUNTRA EL CONTADOR
            scanf("%d", &n); // LEE EL NUMERO n COMO ENTERO

            if (n>0) //SI n ES MAYOR A CERO SE ENTRA AL IF
                {
                  positivos++; //COMO ES MAYOR A CERO, ES DECIR POSITIVO, AUMENTAMOS positivos EN UNO
                }
            else } //SI n NO ES MAYOR A 0 ENTRAMOS AL ELSE
                {
                   if (n<0) //SI n ES MENOR A 0 SE ENTRA AL SEGUNDO IF
                      {
                         negativos++; //COMO ES MENOR A CERO, ES DECIR NEGATIVO, AUMENTAMOS negativos EN UNO
                      }
                  else //SI TAMPOCO ES MENOR A 0, ENTREMOS AL ELSE.
                      {
                         nulos++; //SE AUMENTA NULOS EN UNO, YA QUE NO ES POSITIVO NI NEGATIVO
                      }
                }
      }
    printf("\n");
    printf("La cantidad de números positivos ingresados es de: %d\n", positivos); //SE IMPRIME EL CONTADOR DE POSITIVOS, CUANTOS NUMEROS ENTRARON AL IF CON CONDICION n MAYOR A 0
    printf("La cantidad de números negativos ingresados es de:: %d\n", negativos); //SE IMPRIME EL CONTADOR DE NEGATIVOS, CUATOS NUMEROS ENTRARON AL IF CON CONDICION n MENOR A 0
    printf("La cantidad de números nulos ingresados es de: %d\n", nulos); //SE IMPRIME EL CONTADOR DE NULOS, CUANTOS NUMEROS NO FUERON NI POSITIVOS NI NEGATIVOS

    return 0;
}
