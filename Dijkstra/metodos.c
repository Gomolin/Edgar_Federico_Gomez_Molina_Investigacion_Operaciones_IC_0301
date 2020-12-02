/**
 * @file metodos.c
 * @author Edgar Federico Gómez Molina
 * @date 30/10/2020
 * @brief Metodos
*/
#include "metodos.h"

void inicializ(int aris,int array[max][max]){
    for (int i = 0; i < aris; i++)
    {
        for (int j = 0; j < aris; j++)
        {
            array[i][j]=0; 
        }
    }
}

void llenado(int aris,int array[max][max]){
    char ab[max]="AB";
    printf("=================Llenado de abyasencias=================\n");
    for (int i = 0; i < aris; i++)
    {
        for (int j = 0; j < 2; j++)
        {        
        printf("%c:",ab[j]);
        scanf("%d",&array[i][j]);
        }
    }
}

int findStreet(int aris,int inicio,int fin,int array[max][max],int auxiliar2,int auxiliar){
    int finall=0;
    auxiliar=inicio;
    auxiliar2=0;
    do
    {
        inicio=auxiliar;
     for (int i = 0; i < aris; i++){
         for (int j = 0; j < 2; j++)
         {
               if (inicio==array[i][0]){
                   auxiliar=array[i][1];
                   if (auxiliar==fin){
                       auxiliar2=aris;
                        final=fin;
                   }
               } 
         }
       }
       auxiliar2++;
    } while (auxiliar2<aris);
return final;
}

void impresion(int aris,int array[max][max]){
    printf("====================ADYACENCIAS EN FORMA DE MATRIZ====================\n");
  for (int i = 0; i < aris; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        printf("[%d]\t",array[i][j]);
        }
        printf("\n");
    }
     
}

void existencia(int fin,int final){
    printf("=================EXISTE UN CAMINO?=================\n");
    if (fin==final)
    {
        printf("SI EXISTE UN CAMINO :D\n");
    }else
    {
        printf("NO EXISTE UN CAMINO D:\n");
    }
}
