/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Estructuras Repetitivas FOR, WHILE.. 1*/

#include <stdio.h>

int main() 
{
    int i; //DECLARO A UN CONTADOR i COMO ENTERO
    int sumpar=0; //DECLARO UNA VARIABLE sumpar COMO ENTERO Y LA INICIALIZO EN 0
    
    printf("...ESTE PROGRAMA SUMA LOS NUMEROS PARES...\n");
    printf(".    ...COMPRENDIDOS DEL 10 AL 50...\n\n");
    
    for (i=10; i<51; i++) //CON UN FOR VAMOS A CONDICIONAR EL CONTADOR, QUE TIEN QUE EMPEZAR EN 10
                          //Y TERMINAR CUANDO SEA MENOR A 51 Y SE AUMENTA EN UNO
      {
         if (i%2==0) //SI EL NUMERO DONDE SE ENCUENTRE EL CONTADOR MODULO CON 2 ES CERO ENTRA EL IF
           {   
             sumpar=sumpar+i; //YA QUE EL RESIDUO DEL NUMERO DONDE SE ENCUNTRE AL CONTADOR ENTRE 2, ES CERO
                              //QUIERE DECIR QUE ES UN NUMERO PAR Y SE ACTUALIZARA sumpar A sumpar+ EL CONTADOR i
           }
      }
    printf("La suma total es:: %d\n", sumpar); //SE IMPRIME EL VALOR GUARDADO EN sumpar

    return 0;
}
