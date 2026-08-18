#include <stdio.h>
#include "Busca.h"

//Função de impressão para o TipoDado = int
//Se TipoDado mudar, basta reescrever a função
void imprimeInt(TipoDado valor){
    printf("%d ", valor);
}

int main(){
    Vetor v;
    int resultado;

    criaVetor(&v);

    TipoDado valores[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(valores) / sizeof(valores[0]);

    for(int i  = 0; i < n; i++){
        insereVetor(&v, valores[i]);
    }

    printf("Vetor: ");
    imprimeVetor(&v, imprimeInt);

    //Busca sequencial
    resultado = buscaSequencial(&v, 7);
    printf("Busca sequencial (chave = 7): posição %d\n", resultado);

    resultado = buscaSequencial(&v, 8);
    printf("Busca sequencial (chave = 8): posição %d\n", resultado);

    resultado = buscaSequencialComParada(&v, 9);
    printf("Busca sequencial com parada (chave = 9): posição %d\n", resultado);

    resultado = buscaSequencialComParada(&v, 12);
    printf("Busca sequencial com parada (chave = 12): posição %d\n", resultado);

    resultado = buscaSequencialComSentinela(&v, 17);
    printf("Busca sequencial com sentinela (chave = 17): posição %d\n", resultado);

    resultado = buscaSequencialComSentinela(&v, 16);
    printf("Busca sequencial com sentinela (chave = 16): posição %d\n", resultado);
}