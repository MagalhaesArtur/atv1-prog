#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"


struct aluno
    {
        char *nome;
        char *curso;
        int matricula;
    }; 


typedef struct NO
{
    Aluno* aluno;
    struct NO *prox;
   
}No;

struct fila
{
    No *ini;
    No *fim;
};

Fila *fila_cria(){
    No *p = (No*) malloc(sizeof(No));
    if(p == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }
    return p;
    
}

void fila_libera(Fila **fila){
    free(*fila);
    *fila = NULL;
}

int fila_vazia(Fila *fila){

}

// int fila_insere(Fila *fila, Aluno *aluno){
//     char Curso[30];
//     char Nome[50];
//     int Matricula;

//     No  *aux, *novo = malloc(sizeof(No));
//     if(novo){
//         novo->aluno->curso = Curso;
//         novo->aluno->nome = Nome;
//         novo->aluno->matricula = Matricula;
//         novo->prox = NULL;
//         if(fila == NULL){
//             fila = novo;
//         }else{
//             aux = fila;
//             while(aux->prox != NULL){
//                 aux = aux->prox;
//             }
//             aux->prox = novo;
//         }
//     }else{
//         printf("Erro de alocação");
//     }
// }


// Aluno *fila_retira(Fila *fila){

// }