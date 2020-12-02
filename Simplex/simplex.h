/**
*@file   simplex.c
*@author    Edgar Federico Gómez Molina
*@date      01/10/2020 (código).
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
*@brief     Pide al usuario los datos de la función.
*\details   El nombre double significa que la precisión de estos números es dos veces más que la precisión de los números del tipo float. 
En mayoría de los casos el tipo double es más cómodo. El tipo float se encuentra en el ahorro de la memoria durante el almacenamiento 
es importante para las grandes cantidades de matrices de números reales.
*\return    double.
*/
double funcion[MAX], restricciones[MAX+1][MAX+RESTRICCION];

/**
*@brief     Pide al usuario los valores de las restricciones.
*\details   El nombre double significa que la precisión de estos números es dos veces más que la precisión de los números del tipo float. 
En mayoría de los casos el tipo double es más cómodo. El tipo float se encuentra en el ahorro de la memoria durante el almacenamiento 
es importante para las grandes cantidades de matrices de números reales.
*\return    double.
*/
double independiente[RESTRICCION];



#endif
