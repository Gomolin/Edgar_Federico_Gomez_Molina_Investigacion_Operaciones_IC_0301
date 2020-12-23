/**
 * @file LinEspera.h
 * @author Edgar Federico Gomez Molina
 * @date 22-12-2020
 * @union LinEspera.h
 * @brief LinEspera.h libreria/cabezera con funciones para calcular una linea de espera.
*/

#ifndef _LinEspera_H
#define _LinEspera_H
#define Max 24

#include <stdio.h>

/**
 * @brief imprimirHoras Imprime el rango de horas.
 * @param horasInic Inicio de rango de horas.
 * @param horasFinal Fin de rango de horas.
 * @return void
*/
void imprimirHoras(int horaInic,int horaFinal);

/**
 * @brief imprimirUsuarios Imprime la informacion de los arreglos de los usuarios.
 * @param auxiliar Arreglo a imprimir. 
 * @param horasInic Inicio de rango de horas.
 * @param horasFinal Fin de rango de horas.
 * @return void
*/
void imprimirUsuarios(int auxiliar[Max],int horaInic,int horaFinal);

/**
 * @brief usuarioEspera calcula la cantidad de usuarios que estan en espera.
 * @param capacidadAtenccion Arreglo con la informacion de capacidad de atencion.
 * @param usuarios usuarios a inicializar/usuarios de entrada.
 * @param usuarioEspera Usuarios que estan en la fila de espera.
 * @param horaInic Inicio de rango de horas.
 * @param horaFinal Fin de rango de horas.
 * @return void
*/
void usuarioEspera(int capacidadAtenccion[Max],int usuarios[Max],int usuarioEspera[Max],int horaInic,int horaFinal);

/**
 * @brief input Esta se encarga de calcular la entrada de usuarios.
 * @param usuarios usuarios a inicializar/usuarios de entrada.
 * @param horaInic Inicio de rango de horas.
 * @param horaFinal Fin de rango de horas.
 * @return void
*/
void input(int usuarios[Max],int horaInic,int horaFinal);

/**
 * @brief output Esta se encarga de calcular la salida de los usuarios.
 * @param capAten Arreglo con la informacion de capacidad de atencion.
 * @param usuarios usuarios a inicializar/usuarios de entrada.
 * @param usuarioEspera Usuarios que estan en la fila de espera.
 * @param horaInic Inicio de rango de horas.
 * @param horaFinal Fin de rango de horas.
 * @return void
*/
void output(int capAtencion[Max],int usuarios[Max],int usuarioEspera[Max],int out[Max],int horaInic,int horaFinal);

/**
 * @brief lineas Imprime lo que es la tabla o el diseño como tal
 * @param horaInic Inicio de rango de horas.
 * @param horaFinal Fin de rango de horas.
 * @return void
*/
void lineas(int horaInic,int horaFinal);

#endif
