#include <stdio.h>
#include <string.h>

//8) El usuario ingresar� nombres de personas hasta que ingrese la palabra "FIN". No sabemos cu�ntos nombres ingresar�.
//Luego de finalizar el ingreso, mostrar en pantalla cu�l es el primer nombre en orden alfab�tico de todos los ingresados.
int main (){
    int i = 0;
    char col3[30] = {0};
    char col4[30] = {100};
    while(i>=0){
        printf("\nIngrese el nombre de la persona %d o FIN: ", i);
        scanf("%s", col3);
        if (strcmp(col3,"FIN")==0){
            i = -2;
        }
        else{
            if (strcmp(col3,col4)<0){
                strcpy(col4,col3);
            }
        }
        i++;
    }
    printf("\n1er Persona alfabeticamente: %s", col4);
}
