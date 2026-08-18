#include <stdio.h>
#include "Busca.h"

void criaVetor(Vetor *v){
    v->tamanho = 0;
}

int insereVetor(Vetor *v, TipoDado valor){

    if(v->tamanho >= TAM_MAX){
        return 0;
    }

    v->dados[v->tamanho] = valor;
    v->tamanho++;

    return 1;
}

void imprimeVetor(const Vetor *v, void(*imprimeElemento)(TipoDado)){
    
    int i;
    for(int i = 0; i < v->tamanho; i++){
        imprimeElemento(v->dados[i]);
    }
    printf("\n");
}

int buscaSequencial(const Vetor *v, TipoDado chave){
    int i;
    for(int i = 0; i < v->tamanho; i++){
        if(v->dados[i] == chave){
            return i;
        }
    }
    return -1;
}

int buscaSequencialComParada(const Vetor *v, TipoDado chave){
    int i;
    for(i = 0; i < v->tamanho; i++){
        if(v->dados[i] == chave){
            return i;
        } else if (v->dados[i] > chave){
            return -1;
        }
    }

    return -1;
}

int buscaSequencialComSentinela(Vetor *v, TipoDado chave){
    int i = 0;
    //insere chave na ultima posição do vetor
    v->dados[v->tamanho] = chave;

    while(v->dados[i] != chave){
        i++;
    }

    return (i < v->tamanho) ? i : -1;
}