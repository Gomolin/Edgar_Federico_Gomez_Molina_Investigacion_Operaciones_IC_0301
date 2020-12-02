
/**
*@file      main.c 
*@brief     Sección principal del código.
*\details   Me equivoque a la hora de ordenar en este programa, esta es la seccion principal, pero tendria que ser la que pide datos 
*@author    Edgar Federico Gómez Molina
*@date      01/10/2020 (código).
*@todo      Metodo Simplex
*
*
*/
#include "simplex.h"

int main(void)
{
/**
*
*@param     i           Variable auxiliar para estructura "if" y "for".
*@param     j           Variable auxiliar para estructura "if" y "for".
*@param     reng        Variable para guardar la cantidad de filas.
*@param     col         Variable para guardar la cantidad de columnas.
*@param     aux         Variable auxiliar que ayyuda a la creación de la tabla.
*@param     k           Variable para crear la tabla.
*@param     maaximo     
*/
int rest, vers, ni ;
int i,j, k, col, reng, count, cuenta;
double maximo = 0, menor, aux, mult, temp;
rest = leeDatos(&vers);
//En esta parte es la creacion de la Tabla
for(i=0;i<rest;i++)
for(j=0; j<rest; j++)
if (i == j)
restricciones[i][vers+j]=1;
else
restricciones[i][vers+j]=0;
for(i=0; i<rest;i++)
restricciones[i][vers+rest] = independiente[i];

for(j=0; j<vers; j++)
restricciones[rest][j] = funcion[j] * -1;
for(j=vers; j<rest+vers; j++)
restricciones[rest][j] = 0;

ni=1;
printf("\n:::::::::::::::::::::::::::::::::::::::::::::::");
printf("\n TABLA SIMPLEX  %d",ni);
printf("\n::::::::::::::::::::::::::::::::::::::::::::::::\n");
ni++;
for(i=0; i<=rest; i++) {
for(j=0; j<=rest+vers; j++)
printf(" %.2lf \t", restricciones[i][j]);
printf("\n");
}
do
{
//Aqui se encuentra la variable de desicion.
maximo = abs(restricciones[rest][0]);
col = 0;
for(j=0; j<=rest+vers; j++)
{
if( restricciones[rest][j] < 0 )
{
temp = -1 *restricciones[rest][j];
if ( maximo < temp)
{
maximo = temp;
col = j;
}
}
else
continue;
}

count = 0;
aux = 1e20;
menor = 1e20;
for(i=0; i<rest; i++) {

if(restricciones[i][col] > 0)
aux = restricciones[i][rest+vers] / restricciones[i][col];
else
count++;
if( menor > aux ) {
menor = aux;
reng = i;
}
}
if(count == rest) {
printf("Solucion no acotada");
exit(1);
}
printf("\nPivote: %.2lf, renglon 2 columna 2",restricciones[reng][col], reng, col);

//Coeficientes de la nueva tabla :)
aux = restricciones[reng][col];
for(j=0; j<=(rest+vers); j++)
restricciones[reng][j] = restricciones[reng][j] /aux;


for(i=0; i<=rest; i++) {
if (i == reng )
continue;
else {
aux = restricciones[i][col] * -1;
for(k=0; k <= rest+vers; k++) {
restricciones[i][k] = (aux *restricciones[reng][k]) +
restricciones[i][k];
}
}

}
printf("\n::::::::::::::::::::::::::::::::::::::::::::::::");
printf("\n TABLA SIMPLEX %d",ni);
printf("\n::::::::::::::::::::::::::::::::::::::::::::::\n");
ni++;
for(i=0; i<=rest; i++) {
for(j=0; j<=rest+vers; j++)
printf(" %.2lf \t", restricciones[i][j]);
printf("\n");
}
cuenta = 0;
for(j=0;j<rest+vers;j++)
if(restricciones[rest][j] >= 0)
cuenta++;
if (cuenta == rest+vers)
break;
} while(cuenta);

printf("::::::::----------------------------------------->:");

getch();
}
