/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Condicional IF 4*/

#include <stdio.h>

int main() 
{
    int N1,N2; //DECLARO DOS NUMEROS COMO ENTEROS
    
    printf("...ESTE PROGRAMA CALCULA SI UN NÚMERO ES DIVISOR DEL OTRO...\n\n");
    printf("Ingresa el primer numero entero: ");
    scanf("%d", &N1); //SE LEE EL PRIMER NUMERO ENTERO
    printf("Ingresa el segundo numero: ");
    scanf("%d", &N2); //SE LEE EL SEGUNDO NUMERO ENTERO

    if (N1!=0 && N2!=0) //VALIDAMOS QUE LOS DOS NUMEROS SEAN DISINTOS DE CERO Y SE ENTRA AL IF
      {
        if (N1%N2==0) //SI AL DIVIDIR N1 CON N2 SU MODULO (RESIDUO) DA IGUAL A 0, SE ENTRA AL IF
            {
              printf("\n %d es divisor de %d\n", N2, N1); //COMO EL RESIDUO ES CERO SE IMPRIME QUE N2 SI DIVISOR DE N1
            } 
        else //SI ESE MODULO NO DA CERO ENTRAMOS AL ELSE
                if (N2%N1==0) //SI  EL MODULO DE N2 CON N1 ES IGUAL A CERO, ENTRA AL IF
                  {
                     printf("\n %d es divisor de %d\n", N1, N2); //COMO EL RESIDUO ES CERO SE IMPRIME QUE N1 ES DIVISOR DE N2
                  } 
                else //SI TAMPOCO ESE MODULO DA CERO SE ENTRA AL ELSE
                  {
                     printf("\n Ninguno número es divisor del otro.\n"); //SE IMPRIME QUE NINGUN NUMERO ES DIVISOR DEL OTRO
                  }
      }
    else //ESTE ELSE ES POR SI ALGUNO DE LOS DOS NUMEROS LEIDOS NO SON DIFERENTE DE CERO, YA QUE NO SE PUEDE DIVIDIR ENTRE 0
      {
          printf("\n ..NO SE PUEDE DIVIDIR ENTRE CERO..."); //SOLO SE IMRPRIME LA LEYENDA SI ENTRAR A LOS IF ELSE ANIDADOS
      }

    return 0;
}
