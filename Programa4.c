/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas Simples 4*/
#include <stdio.h>

int main() 
 {
    float inicial, interes, final; //DECLARO TRES VARIABLES FLOTANTES
    
    printf ("...ESTE RPOGRAMA CALCULA EL MONTO FINAL CON INTERES MENSUAL..\n\n");
    printf("Ingresa el monto inicial: ");
    scanf("%f", &inicial); //SE LEE EL MONTO INICIAL COMO FLOTANTE
    printf("Ingresa la tasa de interes mensual en  decimales (ejemplo: 0.05, 0.08): ");
    scanf("%f", &interes); //SE LEE LA TASA DE INTERES COMO FLOTANTE
    interes=inicial*interes; //SE ACTUALIZA EL VALOR DE INTERES A INICIAL POR INTERES
    final=interes+inicial; //SE SUMA EL MONTO INCIAIL MAS LO QUE VA GENERAR EL INTERES YA CALCULADO ANTERIORMENTE
    printf("\n");
    printf("El monto al final del mes es: %.2f\n", final); //SE IMRPRIME EL MONTO FINAL REDONDEANDO A 2 DECIMALES 

    return 0;
}
