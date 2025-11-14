/*DAYANA MONSERRAT RIVERA MONTES DE OCA
  Tarea 2 Problemas con Condicional IF 2*/

#include <stdio.h>

int main() 
{
    float sI, sF;
    
    printf("...ESTE PROGRAMA CALCULA EL SUELDO CON SU AUMENTO CORRESPONIENTE...\n\n");
    printf("Ingresa el sueldo del trabajador: ");
    scanf("%f", &sI);
    printf("\n");
    if (sI<1000) 
        {
           sF=sI+(sI*0.15);
           printf("Le corresponde un aumento del 15%\n");
           printf("El sueldo final es: %.2f\n", sF);
        } 
    else 
        {
            sF=sI+(sI*0.12);
            printf("Le corresponde un aumento del 12%\n");
            printf("El sueldo final es: %.2f\n", sF);
        }

    return 0;
}
