#include <stdio.h>
#include "Geral.h"
#include "ordenacao.h"

#define STD 10

int main(){

    int fila[STD];
    initArray(fila, STD);

    printf("Fila desorganizada: \n");
    printArray(fila, STD);  

    insertionSort(fila, STD);

    printf("\nFila Organizada: \n");
    printArray(fila, STD);

    return 0;
}