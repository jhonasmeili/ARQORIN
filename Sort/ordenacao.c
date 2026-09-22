#include <stdlib.h>
#include <stdio.h>
#include "ordenacao.h"


void insertionSort(int array[TAM_MAX], int size){
    for(int i = 1; i <= size - 1; i++){
        int key = array[i];
        int j = i - 1;
        
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j -= 1;
        }

        array[j+1] = key;
    }
}

void selectionSort(int array[TAM_MAX], int size){
    for(int i = 0; i <= size - 2; i++){
        int posMenor = i;

        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[posMenor]) posMenor = j;
        }

        if(posMenor != i){
            int aux = array[i];
            array[i] = array[posMenor];
            array[posMenor] = aux;
        }
    }
}

void shellSort(int array[TAM_MAX], int size){
    int gap = size / 2;

    while (gap > 0){
        for(int i = gap; i <= size - 1; i++){
            int key = array[i];
            int j = i - gap;

            while(j >= 0 && array[j] > key){
                array[j+gap] = array[j];
                j -= gap;
            }

            array[j+gap] = key;
        }
        gap = gap / 2;
    }
}

void heapSort(int array[TAM_MAX], int size){
    buildHeap(array, size);

    for(int i = size -1; i >= 1; i--){
        int aux = array[0];
        array[0] = array[i];
        array[i] = aux;

        heapify(array, i, 0);
    }
}

void buildHeap(int array[TAM_MAX], int size){
    for(int i = (size/2) - 1; i >= 0; i--){
        heapify(array, size, i);
    }
}

void heapify(int array[TAM_MAX], int size, int i){
    int maior = i;
    int esquerda = 2*i +1;
    int direita = 2*i +2;

    if(esquerda < size && array[esquerda] > array[maior]) maior = esquerda;
    if(direita < size && array[direita] > array[maior]) maior = direita;

    if(maior != i){
        int aux = array[i];
        array[i] = array[maior];
        array[maior] = aux;

        heapify(array, size, maior);
    }
}

void quickSort(int array[TAM_MAX], int start, int end){
    if(start < end){
        int posPivo = partition(array, start, end);

        quickSort(array, start, posPivo -1);
        quickSort(array, posPivo + 1, end);
    }
}

int partition(int array[TAM_MAX], int start, int end){
    int pivo = array[end];
    int i = start - 1;

    for(int j = start; j <= end-1; j++){
        if(array[j] < pivo){
            i++;

            int aux = array[i];
            array[i] = array[j];
            array[j] =  aux;
        }
    }

    int aux = array[i+1];
    array[i+1] = array[end];
    array[end] = aux;

    return i+1;
}

