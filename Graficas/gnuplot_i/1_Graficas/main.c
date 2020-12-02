/**
*@file      main.c
*@author    Edgar Federico Gómez Molina.
*@date      24-11-2020 (código).
*
*@brief     Sección principal del código.
*
*
*
*/
#include "gnuplot_i.h"
#include <stdio.h>
#include <stdlib.h>

/**
   ES IMPORTANTE MENCIONAR QUE SE USO LA HERRAMIENTA QUE BRINDO EL PROFE
   POR LO QUE SOLO SE DEBIO COLOCAR CIERTOS ELEMENTOS PARA QUE EL PROGRAMA
   LOGRARA SU COMETIDO.
   
   ESTE YA CONTABA CON METODOS, SOLO FUE CREAR LA CLASE MAIN
 */
int main() {
  /**
*
*@param     ro1       Para alojar el rango inferior izquierdo. 
*@param     ro2       Para alojar el rango superior  derecho.
*@param     m         Guarda el dato "m" de la funcion.
*@param     b         Guarda el dato "r" de la funcion.
**/
	int ro1,ro2,m,b;
	//Inicia la sesion en la aplicacion de GNUPLOT
	gnuplot_ctrl * ino;//Importante colocar esta linea de comando, es la que se encarga de hacer funcionar a la aplicacion
    ino = gnuplot_init();
    
    //Otencion de datos por parrte del usuario
    printf("-_-_-_GRAFICAS MEDIANTE LA APLICACION GNUPLOT-_-_-_ \n");
    printf("Ecuación lineal_Formula_: (y = mx +- b)\n\n");
    
    printf("Dame el valor m: ");
	scanf("%d", &m);
	
	printf("Dame el valor b: ");
	scanf("%d", &b);
	
	printf("Rango inicial en la recta: ");
	scanf("%d", &ro1);
	
	printf("Rango final en la recta: ");
	scanf("%d", &ro2);
	
/**

*\details  En esta seccion se utilizan las funciones que ya vienen por defecto en la aplicación o en la libreria.
*
*\details   gnuplot_setstyle() es para elegir el aspecto de la linea a generar.
*
*\details   gnuplot_plot_slope(); crea el grafico de la forma y=mx+b
*
*\details   gnuplot_set_xlabel() y gnuplot_set_ylabel() asignan un nombre en las posiciones "x" y "y".
*
*\details   gnuplot_cmd() y gnuplot_cmd()  generan los ejes "x" y "y".
*
*\details   gnuplot_cmd() y gnuplot_cmd() establecen los rangos de "x" y "y".
*
*
*@param     ro1       Para alojar el rango inferior o izquierdo. 
*@param     ro2       Para alojar el rango superior o derecho.
*@param     m        Guarda el dato "m" de la funcion.
*@param     b        Guarda el dato "r" de la funcion.
*@return    0
*/
	
	//aspecto de la linea (CREACIÓN)
	gnuplot_setstyle(ino, "lines");
    
	gnuplot_set_xlabel (ino, "Eje X");//nombre de las etiquetas
    
	gnuplot_set_ylabel (ino, "Eje Y");//nombre de las etiquetas
    
	gnuplot_cmd(ino,"set xzeroaxis lt -1");//eje x
	
	gnuplot_cmd(ino,"set yzeroaxis lt -1");//eje y
    
	gnuplot_cmd(ino,"set xrange [%d:%d]",ro1, ro2);//rango de la x
    
	gnuplot_cmd(ino,"set yrange [%d:%d]",ro1, ro2);//rango de la y
    
	gnuplot_plot_slope(ino,m,b, "Funcion de la forma y=mx+b");
    

    sleep(30);
	
	//cierra la sesion en la aplicacion de Gnuplot
	gnuplot_close (ino);
	
	return 0;
}
