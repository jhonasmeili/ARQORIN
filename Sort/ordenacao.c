#include <stdlib.h>
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
            gap = gap / 2;
        }
    }
}

