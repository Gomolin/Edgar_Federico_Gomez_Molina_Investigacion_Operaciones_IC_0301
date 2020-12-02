/**
*@file      datosUsuarios.c
*@author    Edgar Federico Gómez Molina
*@date      01/10/2020 (código).
*@brief     Seccion para colocar los datos que el usuario desea colocar.
*/
#include "simplex.h"

int leeDatos(int *vers) {
int restt,z,i;
printf(" :::::::::::::FUNCION A OPTIMIZAR:::::::::::::::::::");
printf("\nRecuerda que (C)equivale al numero de variable y/o restriccion=== c1.X1+c2.X2+...cn.Xn = Z \n");
printf("Solo necesitas colocar el numero y este se multiplicara Solo \n");
printf("\nNumero de Variables que tendra tu funcion:------------->:");
scanf("%d",vers);

for(z=0;z<*vers;z++)
{
printf(" Ingresa un numero (C)%d: ", z+1);
scanf("%lf",&funcion[z]);
fflush(stdin);
printf ("\n");
}

printf("\nNumero de Restricciones:------------>: ");
scanf("%d",&restt);
fflush(stdin);
for(i=0;i<restt;i++)
{
printf("Restriccion:----------->:%d\n",i+1);
for(z=0;z<*vers;z++)
{
printf(" Ingresa un numero (C)%d: ",z+1);
scanf("%lf",&restricciones[i][z]);
fflush(stdin);
printf ("\n");
}
printf("Termino independiente:----------->: ");
scanf("%lf", &independiente[i]);
fflush(stdin);
printf ("\n");
}

return restt;
printf ("\n");
}
