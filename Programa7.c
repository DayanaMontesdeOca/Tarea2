/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Condicional IF 3*/

#include <stdio.h>

int main() 
{
    float KM, precioKM, totalKM, total; //DECLARO COMO FOTANTE 4 VARIABLES
    int d; //DECLARO COMO ENTERO A DIAS
   
    printf("...ESTE PROGRAMA CALCULA EL PRECIO TOTAL DE EL TICKET DE IDA Y VUELTA...\n\n");
    printf("Ingrese la distancia de ida en kilometros: ");
    scanf("%f", &KM); //SE LEE KM COMO FLOTANTE
    printf("Ingrese los días de estancia: ");
    scanf("%d", &d); //SE LEE d COMO ENTERO

    totalKM=KM*2; //SE MULTIPLICA KM POR 2 PARA CALCULAR LOS KILOMETROS TOTALES DE IDA Y VUELTA            
    precioKM=totalKM*0.23; //SE MULTIPLICA EL TOTAL DE KILOMETROS POR SU PRECIO DE 0.23          

    if (d>7 && totalKM>800) //SI LOS DIAS SON MAYORES A 7 Y EL TOTAL DE KILOMETROS MAYOR A 800 ENTRA AL IF
       {
          total=precioKM-(precioKM*0.30); //SE SACA EL DESCUENTO MULTIPLICANDO precioKM POR 0.30 Y SE LE RESTA precioKM
          printf("\n");                   //ASI SE OBTIENE EL PRECIO CON DESCUENTO
          printf("Se aplico un descuesto del 30%\n"); //INDICA QUE APLICO UN DESCUENTO
          printf("El precio del ticket es: %.2f\n", total); //SE IMRPIME EL total QUE ES EL PRECIO DEL TICKET, CON DOS DECIMALES
       } 
    else //SI ALGUNA DE LAS CONDICIONES DEL IF NO SE CUMPLEN SE ENTRA AL ELSE
      {
          total=precioKM; //EL total DEL PRECIO VA A SER IGUAL AL precioKM YA QUE NO SE APLICO DESCUENTO
          printf("\n");
          printf("El precio del ticket es: %.2f\n", total); //SE IMPRIME total QUE ES EL PRECIO DEL TICKET, CON DOS DECIMALES
      }

    return 0;
}
