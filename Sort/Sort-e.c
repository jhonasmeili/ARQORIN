#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ordenacao.h"
#include "Geral.h"

int main(){
    int arrayHeap[TAM_MAX];
    int arrayShell[TAM_MAX];
    int arrayQuick[TAM_MAX];
    initArray(arrayHeap, TAM_MAX);
    cloneArray(arrayHeap, arrayShell, TAM_MAX);
    cloneArray(arrayHeap, arrayQuick, TAM_MAX);

    clock_t shellStart, shellEnd;
    shellStart = clock();
    shellSort(arrayShell, TAM_MAX);
    shellEnd = clock();

    printf("Array Shell:\n\n");
    //printArray(arrayShell, TAM_MAX);
    printf("Tempo em relógios: %d\n", ((int) (shellEnd - shellStart)));
    printf("Tempo em segundos: %f\n", ((double) (shellEnd - shellStart) / CLOCKS_PER_SEC));

    clock_t heapStart, heapEnd;
    heapStart = clock();
    heapSort(arrayHeap, TAM_MAX);
    heapEnd = clock();

    printf("Array Heap:\n\n");
    //printArray(arrayHeap, TAM_MAX);
    printf("Tempo em relógios: %d\n", ((int) (heapEnd - heapStart)));
    printf("Tempo em segundos: %f\n", ((double) (heapEnd - heapStart) / CLOCKS_PER_SEC));

    clock_t quickStart, quickEnd;
    quickStart = clock();
    quickSort(arrayQuick, 0, TAM_MAX - 1);
    quickEnd = clock();

    printf("Array Quick:\n\n");
    //printArray(arrayQuick, TAM_MAX);
    printf("Tempo em relógios: %d\n", ((int) (quickEnd - quickStart)));
    printf("Tempo em segundos: %f\n", ((double) (quickEnd - quickStart) / CLOCKS_PER_SEC));

    return 0;
}