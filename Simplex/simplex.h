/**
*@file   simplex.c
*@author    Edgar Federico G�mez Molina
*@date      01/10/2020 (c�digo).
*@brief  Seccion para llamar las funciones.
*\details Al ser el primer proyecto de la clase lo hice mal, pero los siguientes estaran bien.
*/
#ifndef __SIMPLEX_H
#define __SIMPLEX_H
 
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10
#define RESTRICCION 3
/**
*@brief     Pide al usuario los datos de la funci�n.
*\details   El nombre double significa que la precisi�n de estos n�meros es dos veces m�s que la precisi�n de los n�meros del tipo float. 
En mayor�a de los casos el tipo double es m�s c�modo. El tipo float se encuentra en el ahorro de la memoria durante el almacenamiento 
es importante para las grandes cantidades de matrices de n�meros reales.
*\return    double.
*/
double funcion[MAX], restricciones[MAX+1][MAX+RESTRICCION];

/**
*@brief     Pide al usuario los valores de las restricciones.
*\details   El nombre double significa que la precisi�n de estos n�meros es dos veces m�s que la precisi�n de los n�meros del tipo float. 
En mayor�a de los casos el tipo double es m�s c�modo. El tipo float se encuentra en el ahorro de la memoria durante el almacenamiento 
es importante para las grandes cantidades de matrices de n�meros reales.
*\return    double.
*/
double independiente[RESTRICCION];



#endif
