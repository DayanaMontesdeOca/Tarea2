/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Condicional IF 1*/

#include <stdio.h>

int main() 
{
    float monto, total=0; //DECLARO DOS VARIABLES COMO FOTANTES E INCIALIZO TOTAL EN CERO
    
    printf("...ESTE PROGRAMA CALCULA SI SE APLICA O NO EL DESCUENTO...\n\n");
    printf("Ingresa el monto de la compra: ");
    scanf("%f", &monto); //LEE COMO FLOTANTE A MONTO
    printf("\n");

    if (monto>2500) //SI MONTO ES MAYOR A 2500 SE ENTRA AL IF
          {
            total=monto-(monto*0.08);  //SE MULTIPLICA EL MONTO POR EL DESCUENTO Y SE LE RESTA AL MONTO INICIAL PARA EL MONTO CON DESCUENTO
            printf("El descuento se aplica y el cliente debe pagar: %.2f\n", total); //SE IMRPRIME TOTAL REDONDEANDO A 2 DECIMALES
          } 
    else  //SI NO ES MAYOR A 2500 ENTRA AL ELSE
        {
          total=monto; //NO SE APLICA NINGUN DESCUENTO Y EL TOTAL ES IGUAL AL MONTO
          printf("El descuento no se aplica y el cliente debe pagar %.2f\n", total); //SE IMPRIME TAL CUAL
        }

    return 0;
}
