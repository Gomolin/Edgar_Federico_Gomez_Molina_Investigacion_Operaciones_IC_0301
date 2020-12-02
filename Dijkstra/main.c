/**
 * @file     main.c
 * @author   Edgar Federico Gómez Molina
 *\details   Me fueron guiando para la elaboracion de este programa.
 * @date     30/10/2020
 * @brief    Funcion principal
*/
#include "metodos.h"

int main(int argc, char const *args[]){
	system ("color 70");
    int array[max][max];
    int inicio=0,fin=0,aris=0,auxiliar=0,auxiliar2=0,final=0,op=0;
    do{
        printf("===========EXISTENCIA DE  UN CAMINO HACIA TU DESTINO============\n");
    printf("Dame el numero de aristas que contiene tu grafo :\n");
    scanf("%d",&aris);
    inicializ(aris,array);
    llenado(aris,array);
    fflush(stdin);
    impresion(aris,array);
    do{
    printf("===============CONEXION DE LOS NODOS============\n");
    printf("Inicio:");
    scanf("%d",&inicio);
    printf("Destino:");
    scanf("%d",&fin);
    final=findStreet(aris,inicio,fin,array,auxiliar2,auxiliar);
    existencia(fin,final);
    printf("\nDesea hacer otro recorrido, si=1 ,no=0:\n");
    scanf("%d",&op);
    fflush(stdin);
    } while (op==1);
    printf("\nDesea hacer otro grafo, si=1 ,no=0:\n");
    scanf("%d",&op);
    fflush(stdin);
    } while (op==1);
    return 0;
}
