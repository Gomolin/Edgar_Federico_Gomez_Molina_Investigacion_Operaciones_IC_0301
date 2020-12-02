/**
 * @file metodos.h
 * @author Edgar Federico Gómez Molina
 * @date 30/10/2020
 * @union metodos.h
 * @brief Funciones principales para la realizacion del programa
*/

#ifndef metodos_H
#define metodos_H
#define max 1000

#include <stdio.h>

int array[max][max];
int inicio,fin,aris,auxiliar,auxiliar2,final,op;
/**
 * @brief inicializ Inicializa los espacios necesarios para su ejecución de la matriz bidimensional.
 * @param aris Numero de aristas que contiene el grafo
 * @param array Se encarga de guardar los datos de las aristas para su conexion
 * @return void.
*/
void inicializ(int aris,int array[max][max]);
/**
 * @brief llenado Solicita las adyasencias que hay en el grafo que se esta utilizando. 
 * @param aris Numero de aristas que contiene el grafo
 * @param array Se encarga de guardar los datos de las aristas para su conexion
 * @return void.
 */
void llenado(int aris,int array[max][max]);
/**
 * @brief findStreet Motor del programa, se encarga de comparar si las coordenadas a buscar tienen un camino para encontrarse.
 * @param aris Numero de aristas que contiene el grafo
 * @param array Se encarga de guardar los datos de las aristas para su conexion
 * @param inicio Es la cordena inicial que se solicita al usuario.
 * @return int
*/
int findStreet(int aris,int inicio,int fin,int array[max][max],int auxiliar2,int auxiliar);
/**
 * @brief Impresión imprime la matriz de adyasencia del grafo ocupado.
 * @param aris Numero de aristas que contiene el grafo
 * @param array Se encarga de guardar los datos de las aristas para su conexion
 * @return void.
*/
void impresion(int aris,int array[max][max]);
/**
 * @brief Compra los resultados obtenidos y si son iguales quiere decir que existe un camino.
 * @param fin Es la coordenada final a comparar para determinar si existe un camino o no.
 * @param final Es el valor obtenido de la búsqueda de las rutas, se compara con fin para determinar si existe o no camino.
 * @return void.
*/
void existencia(int fin,int final);

#endif
