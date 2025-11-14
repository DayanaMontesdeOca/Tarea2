/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Condicional IF 2*/

#include <stdio.h>

int main() 
{
    float sI, sF; //DECLARO COMO FLOTANTES A 2 VARIABLES
    
    printf("...ESTE PROGRAMA CALCULA EL SUELDO CON SU AUMENTO CORRESPONIENTE...\n\n");
    printf("Ingresa el sueldo del trabajador: ");
    scanf("%f", &sI);  //SE LEE SUELDO INCIAL COMO FLOTANTE
    printf("\n");
    if (sI<1000) //SI sI ES MENOR A 1000 ENTRA EN EL IF
        {
           sF=sI+(sI*0.15); //SE MULTIPLICA sI POR EL AUMENTO DE 0.15 Y SE LE SUMA sI PARA OBTENER EL SUELDO CON AUMENTO
           printf("Le corresponde un aumento del 15%\n"); //SE INDICA EL AUMENTO CORREPONDIENTE
           printf("El sueldo final es: %.2f\n", sF); //SE IMRPIME EL VALOR DE sF CON DOS DECIMALES
        } 
    else //SI sI NO ES MENOR A 1000 ENTRA EN EL ELSE
        {
            sF=sI+(sI*0.12); //SE MULTIPLICA sI POR EL AUMENTO DE 0.12 Y SE LE SUMA sI PARA OBTENER EL SUELDO CON AUMENTO
            printf("Le corresponde un aumento del 12%\n"); //SE INDICA EL AUMENTO CORREPONDIENTE
            printf("El sueldo final es: %.2f\n", sF); //SE IMRPIME EL VALOR DE sF CON DOS DECIMALES
        }

    return 0;
}
