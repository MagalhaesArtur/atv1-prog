#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"
#include "Fila.h"


int main(void){
   

    int matricula;
    
    char nome[50];
    char curso[30];

  float pontuacao = 0;

 Fila *fila = fila_cria();
  if (fila != NULL && fila_vazia(fila)) {
    printf("[Passou 1.00] - Teste da função fila_vazia() com dados válidos!\n");
    pontuacao = 1.0;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_cheia() com dados válidos!\n");
  }
    
}