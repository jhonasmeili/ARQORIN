#ifndef BUSCA_H
#define BUSCA_H

// Tipo de dado armazenado no vetor
typedef int TipoDado;
//Mudanças facilitadas sobre o tipo de valor

// capacidade de armazenamento
#define TAM_MAX 100

//esrutura de dados para o vetor
typedef struct{
    TipoDado dados[TAM_MAX + 1];
    int tamanho; //qtde de elementos armazenados
} Vetor;

//Inicializa o vetor
void criaVetor(Vetor *v);

//Insere um elemento ao final do vetor
int insereVetor(Vetor *v, TipoDado valor);

//Imprime os elementos do vetor
void imprimeVetor(const Vetor *v, void(*imprimeElemento)(TipoDado));

//Busca Sequencial básica
int buscaSequencial(const Vetor *v, TipoDado chave);

//Busca Sequencial com parada
int buscaSequencialComParada(const Vetor *v, TipoDado chave);

//Busca Sequencial com sentinla
int buscaSequencialComSentinela(Vetor *v, TipoDado chave);

#endif // BUSCA_H