/**
 * @file metodos.c
 * @author Edgar Federico Gomez Molina
 * @date 22-12-2020
 * @brief metodos.c implementacion de los metodos para calcular la linea de espera
*/
#include "LinEspera.h"

void imprimirHoras(int horaInic,int horaFinal){

    for(int i=horaInic;i< horaFinal;i++){
        printf("%i a %i\t\t",i,(i+1));
    }
    printf("\n");
}

void imprimirUsuarios(int auxiliar[Max],int horaInic,int horaFinal){

for (int i = horaInic; i < horaFinal; i++)
{
    printf("%i\t\t",auxiliar[i]);
}
printf("\n");
}

void usuarioEspera(int capacidadAtenccion[Max],int usuarios[Max],int usuarioEspera[Max],int horaInic,int horaFinal){
    int i=0;
    usuarioEspera[horaInic-1]=0;
    for(i= horaInic;i< horaFinal;i++){
        usuarioEspera[i]= usuarios[i]-capacidadAtenccion[i]+usuarioEspera[i-1];
        if(usuarioEspera[i]<0){
            usuarioEspera[i]=0;
        }
    }
}

void input(int usuarios[Max],int horaInic,int horaFinal){
    int i=0,in=0;
    for(i=horaInic;i<horaFinal;i++){
        in+=usuarios[i];
        printf("%i\t\t",in);
    }
    printf("\n");
}

void output(int capAtencion[Max],int usuarios[Max],int usuarioEspera[Max],int out[Max],int horaInic,int horaFinal){
    int i=0,output=0;
    out[horaInic-1]=0;
    for(i=horaInic;i<horaFinal;i++){
        if(usuarioEspera[i]==0){
            output=usuarios[i];
            printf("%i\t\t",output);
        } else{
            output=capAtencion[i];
            printf("%i\t\t",output);
        }
        out[i]=output+out[i-1];
    }
    printf("\n");
}

void lineas(int horaInic,int horaFinal){
    for(int i=horaInic;i<(horaFinal*2);i++){
        printf("===========");
        if(i==(horaInic+2)){
            printf("||");
        }
        if (i==(horaFinal*2)-1)
        {
            printf("||\t");
        }
        
    }
    printf("\n");
}
