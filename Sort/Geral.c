#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Geral.h"

void initArray(int array[TAM_MAX], int size){
    for(int i = 0; i < size; i++){
        srand(clock());
        array[i] = (rand() % 999) + 1;
    }
}

void worstArray(int array[TAM_MAX], int size){
    for(int i = 0; i < size; i++){
        array[i] = size - i;
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
    }
    printf("\n");
}