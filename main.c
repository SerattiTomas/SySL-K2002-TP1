#include <stdio.h>
#include <ctype.h>

// Tomás Seratti K2002

int main(){

    int cantidadCaracteresMax = 10000;
    char cadena[cantidadCaracteresMax];
    char cadenaProcesada[cantidadCaracteresMax];

    int i=0;
    int k=0;

    printf("Ingrese una cadena de texto: \n");

    while((cadena[i++] = getchar()) != EOF && i<cantidadCaracteresMax);
    cadena[i-1] = '\0';

    printf("\nTexto ingresado: \n%s", cadena);

    for (int j = 0; cadena[j]; j++){

        if(islower(cadena[j])){

            cadenaProcesada[k] = toupper(cadena[j]);

        }

        if(isupper(cadena[j])){

            cadenaProcesada[k] = tolower(cadena[j]);

        }

        if(isdigit(cadena[j])){

            k--;
                
        }

        if(!isdigit(cadena[j]) && !isupper(cadena[j]) && !islower(cadena[j])){

            cadenaProcesada[k]= cadena[j];

        }

        k++;
    }

    printf("\nCadena Procesada: \n%s", cadenaProcesada);

    return 0;
};