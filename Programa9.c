/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Estructuras Repetitivas FOR, WHILE.. 1*/

#include <stdio.h>

int main() 

{
    int N, i; //DECLARO COMO ENTEROS A N Y A UN CONTADOR i 
    printf("...ESTE PROGRAMA MUESTRA LA TABLA DE MULTIPLICAR DE UN NÚMERO ENTERO...\n\n");
    printf("Ingresa un numero entero: ");
    scanf("%d", &N); //SE LEE N COMO ENTERO
    printf("\n");

    for (i=1; i<11; i++) //SE INICIALIZA i EN UNO, i TIENE QUE SER MENOR A 11 Y SE AUMENTA EN UNO
       {  
          printf("%d x %d = %d\n", N, i, N*i); //SE IMPRIME EL VALOR DE N, DESPUES EL DE i (EL CONTADOR)
       }                                       //Y AL FINAL EL DE N*i PARA OBTENER LA TABLA DE MULTIPLICAR 

    return 0;
}
