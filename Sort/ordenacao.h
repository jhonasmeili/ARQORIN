#define TAM_MAX 1000

void insertionSort(int array[TAM_MAX], int size);

void selectionSort(int array[TAM_MAX], int size);

void shellSort(int array[TAM_MAX], int size);

void heapSort(int array[TAM_MAX], int size);

void buildHeap(int array[TAM_MAX], int size);

void heapify(int array[TAM_MAX], int size, int i);

void quickSort(int array[TAM_MAX], int start, int end);

int partition(int array[TAM_MAX], int start, int end);