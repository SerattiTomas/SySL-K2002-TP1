#include <stdio.h>
#include <ctype.h>

// Tomás Seratti K2002

int main(){

    int cantidadCaracteresMax = 10000;
    char cadena[cantidadCaracteresMax];
    char cadenaProcesada[cantidadCaracteresMax];

    int i=0;
    int k=0;


    /*
        char cadenaPrueba[] = "ESTOesUNAprueba";

        for (int j = 0; cadenaPrueba[j]; j++){

            if(islower(cadenaPrueba[j])){
                cadenaProcesada[j] = toupper(cadenaPrueba[j]);
            }

            if(isupper(cadenaPrueba[j])){
               cadenaProcesada[j] = tolower(cadenaPrueba[j]);
            }
            
        }

        printf("\nCadena Procesada: \n%s", cadenaProcesada);
    */

    printf("Ingrese una cadena de texto: \n");

    while((cadena[i++] = getchar()) != EOF && i<cantidadCaracteresMax);
    cadena[i-1] = '\0';

    /*
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

                cadenaProcesada[k]= cadena[j]

            }

            k++;
        }
    */

    printf("\nTexto ingresado: \n%s", cadena);
    //printf("\nCadena Procesada: \n%s", cadenaProcesada);

    return 0;
};