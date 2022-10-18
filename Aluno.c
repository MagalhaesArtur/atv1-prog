#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"


struct aluno
    {
        char *nome;
        char *curso;
        int matricula;
    }; 

    Aluno *alu_novo(int matricula, char *nome, char *curso){
        Aluno* p = (Aluno*) malloc(sizeof(Aluno));

    
        if(curso == NULL || nome == NULL || matricula < 0){
            p = NULL;
            return p;
        }

        if (p == NULL)  {
            printf("Sem memoria suficiente!");
            exit(1);
        }
        for(int i = 1; i < strlen(nome); i++){
            if(i >= 49){
                p = NULL;
                return p;
            }
        }

        for(int i = 1; i < strlen(curso); i++){
            if(i >= 29){
                p = NULL;
                return p;
            }
        }



        p->matricula = matricula;
        p->nome = nome;
        p->curso = curso;

        return p;
    }


void alu_atribui(Aluno *aluno, int matricula, char *nome, char *curso){
        
        int teste = 1;
        int isNull  = 0;

        if(aluno == NULL || curso == NULL || nome == NULL || matricula < 0){
            isNull = 1;
          
        }

        if(isNull != 1){
            for(int i = 1; i < strlen(nome); i++){
                if(i >= 49){
                    teste = 0;

                    
                }
            }

            for(int i = 1; i < strlen(curso); i++){
                if(i >= 29){
                    teste = 0;

                    
                }
            }

            if(teste == 1){
                aluno->matricula = matricula;
                char tempNome[50];
                char tempCurso[30];

                
                for(int i = 0; i < 50 ; ++i){
                    tempNome[i]  = nome[i];
                }
                aluno->nome = tempNome;

                for(int i = 0; i < 30 ; ++i){
                    tempCurso[i]  = curso[i];
                }
                aluno->curso = tempCurso;
            }
        
        }

       
    }

    void alu_acessa(Aluno *aluno, int *matricula, char *nome, char *curso){
        *matricula =  aluno->matricula;

        for(int i = 0; i < 50 ; ++i){
            nome[i] = aluno->nome[i];
        }

         for(int i = 0; i < 30 ; ++i){
            curso[i] = aluno->curso[i];
        }
    }

    void alu_libera(Aluno **aluno){
        free(*aluno);
        *aluno = NULL;
    }