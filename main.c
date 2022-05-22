#include <stdio.h>
#include <ctype.h>

// Tomás Seratti K2002

void cadenaProcesarEImprimir(char cadena[], char cadenaProcesada[]){

    int k=0;

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

    printf("\nCadena Procesada: %s", cadenaProcesada);

    return;
}

int main(){

    int cantidadCaracteresMax = 10000;
    char cadena[cantidadCaracteresMax];
    char cadenaProcesada[cantidadCaracteresMax];

    int opcion;
    printf("Si quiere ingresar el texto por consola, digite '1'\nSi quiere ingresarlo por archivo de texto, digite '2'\n");

    scanf("%d", &opcion);

    if(opcion == 1){

        int i=0;

        printf("Ingrese una cadena de texto: \n");

        while((cadena[i++] = getchar()) != EOF && i<cantidadCaracteresMax);
        cadena[i-1] = '\0';

        cadenaProcesarEImprimir(cadena, cadenaProcesada);
        return 1;
    }

    if(opcion == 2){

        char ruta[cantidadCaracteresMax];
        printf("Ingrese la ruta del archivo de texto:\n");

        scanf("%s", &ruta);

        FILE * cadenaTxt = fopen(ruta, "rb");
        if (cadenaTxt == NULL){
            perror("Error al abrir el archivo de texto");
            return 1;
        }

        char caracter;
        int l = 0;

        while (feof(cadenaTxt)==0)
        {
            caracter = fgetc(cadenaTxt);
            cadena[l] = caracter;
            l++;
        }

        fclose(cadenaTxt);

        cadenaProcesarEImprimir(cadena, cadenaProcesada);
        return 1;
    }

    if(opcion != 1 && opcion != 2){
        printf("\nDebe elegir una opcion valida\n");
        main();
        return 1;
    }

    return 0;
};