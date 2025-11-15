/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Estructuras Repetitivas FOR, WHILE.. 4*/

#include <stdio.h>

int main() 
{
    int N, i; //DECLARO A UNA VARIABLE N Y A UN CONTADOR i COMO ENTEROS
    int producto=1; //DECLARO UNA VARIABLE producto COMO ENTERO Y LA INICIALIZO EN 1
    
    printf("...ESTE PROGRAMA CALCULA EL PRODUCTO DE LOS (N)...\n");
    printf("   ...PRIMEROS NÚMEROS NATURALES INGRESADOS..\n\n");
    printf("Ingresa un numero N: ");
    scanf("%d", &N); //SE LEE EL NUMERO N COMO ENTERO

    for (i=1; i<=N; i++) //CON UN FOR PONGO LA CONDICION PARA EL CONTADOR i
                         //i SE IGUALA A 1 Y SE TERMINA HASTA QUE SEA MENOR O IGUAL A N Y SE AUMENTA EL CONTADOR EN UNO
      {
         producto=producto*i; //CUANDO SE ENTRA AL FOR SE ACTUALIZA PRODUCTO COMO producto POR EL CONTADOR i
      }
    printf("\nEl producto de los primeros %d números naturales es: %d\n", N, producto); //SE IMPRIME EL VALOR FINAL GUARDADO EN producto

    return 0;
}
