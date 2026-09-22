#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ordenacao.h"
#define PART_TIME 100

void initArray(int array[TAM_MAX], int size);
void cloneArray(int arrayA[TAM_MAX], int arrayB[TAM_MAX], int size);
void printArray(int array[TAM_MAX], int size);

int main(){
    int arrayIns[TAM_MAX];
    int arrayShell[TAM_MAX];
    initArray(arrayIns, TAM_MAX);
    cloneArray(arrayIns, arrayShell, TAM_MAX);

    clock_t insStart, insEnd;
    insStart = clock();
    insertionSort(arrayIns, TAM_MAX);
    insEnd = clock();

    printf("Array Insert:\n\n");
    printArray(arrayIns, TAM_MAX);
    printf("Tempo em relógios: %d\n", ((int) (insEnd - insStart)));
    printf("Tempo em segundos: %f\n", ((double) (insEnd - insStart) / CLOCKS_PER_SEC));

    clock_t shellStart, shellEnd;
    shellStart = clock();
    shellSort(arrayShell, TAM_MAX);
    shellEnd = clock();

    printf("Array Shell:\n\n");
    printArray(arrayShell, TAM_MAX);
    printf("Tempo em relógios: %d\n", ((int) (shellEnd - shellStart)));
    printf("Tempo em segundos: %f\n", ((double) (shellEnd - shellStart) / CLOCKS_PER_SEC));

    return 0;
}

void initArray(int array[TAM_MAX], int size){
    for(int i = 0; i < size; i++){
        srand(clock());
        array[i] = (rand() % 999) + 1;
    }
}

void cloneArray(int arrayA[TAM_MAX], int arrayB[TAM_MAX], int size){
    for(int i = 0; i < size; i++){
        arrayB[i] = arrayA[i];
    }
}

void printArray(int array[TAM_MAX], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
        (i+1) % PART_TIME == 0 ? printf("\n"): printf("");
    }
    printf("\n");
}