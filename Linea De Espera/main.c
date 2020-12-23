/**
 * @file main.c
 * @author Edgar Federico Gómez Molina
 * @date 22-12-2020
 * @brief Funcion principal pedir datos al usuario.
*/
#include "LinEspera.h"


int main(){
	//Dar colorcito a la ejecucion
	system("color 30");
	
    int horaInic,horaFinal,atencion,i=0,oper=0;
    //arreglos 
    int usuarios[Max],usuarEspera[Max];
    int cajas[Max],capacidadAtenccion[Max];
    int out[Max];

    do{
    //solicitar datos a los usuarios
    
    printf("\t\t°°°°°°===========°°°========PROGRAMA DE LINEA DE ESPERA===========°°°========°°°°°°\n\n");
    printf("Horas de 1 hora a 24 horas\n");
    printf("Hora de inicio:");
    scanf("%i",&horaInic);
    printf("\nHora final:");
    scanf("%i",&horaFinal);
    printf("\nVelocidad de atencion:");
    scanf("%i",&atencion);

    for(i=horaInic;i<horaFinal;i++){
        printf("\nHoras %i a %i",i,(i+1));
        printf("\nUsuarios en espera:");
        scanf("%i",&usuarios[i]);
        printf("\nNumero de cajas abiertas:");
        scanf("%i",&cajas[i]);
        //calcular la velocidad 
        capacidadAtenccion[i]=cajas[i]*atencion;
    }

    //impresion de tabla
    printf("\n");
    lineas(horaInic,horaFinal);
    printf("\t\t_-_-_-_-_-_-TABLA DE ESPERA_-_-_-_-_-_-\t\n");
    
    lineas(horaInic,horaFinal);
    printf("\nHoras\t\t\t");
    
    imprimirHoras(horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nClientes que llegaron\t");
    
    imprimirUsuarios(usuarios,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nNum de cajas abiertas\t");
    
    imprimirUsuarios(cajas,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nCapacidad salidas\t");
    
    imprimirUsuarios(capacidadAtenccion,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nSalidas de clientes\t");
    
    usuarioEspera(capacidadAtenccion,usuarios,usuarEspera,horaInic,horaFinal);
    output(capacidadAtenccion,usuarios,usuarEspera,out,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nCola de espera\t\t");
    
    imprimirUsuarios(usuarEspera,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nInput\t\t\t");
    
    input(usuarios,horaInic,horaFinal);
    lineas(horaInic,horaFinal);
    printf("\nOutput\t\t\t");
    
    imprimirUsuarios(out,horaInic,horaFinal);
    lineas(horaInic,horaFinal);

    printf("\n¿Desea introducir mas datos?\n presione 1=SI,\n presione 0=NO\n");
    scanf("%i",&oper);
    }while(oper!=0);

    return 0; 
}
