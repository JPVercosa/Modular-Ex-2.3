#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

typedef struct no No;

struct no{
  void *info;
  struct no *prox;
  struct no *ant;
}; 

struct lista {
  int tam;
  No *ini;
  No *fim;
  No *corr;
};

Lista *lst_cria(void) { //cria lista vazia (header)
    
    Lista *ls = (Lista*) malloc(sizeof(Lista));
    if (ls == NULL) {
        printf("\n\nMemoria insuficiente\n\n");
        exit(1);
    }
    
    ls->tam = 0;
    ls->ini = NULL;
    ls->fim = NULL;
    ls->corr = NULL;
    
    return ls;
}

int lst_vazia(Lista* ls) { //retorna 1 se a lista estiver vazia ou 0, caso contrario.
    int vazia;
    ls->tam == 0 ? vazia = 1 : vazia = 0;
    return vazia;
}

void lst_insIni(Lista* ls, void* elem){
 //Matheus 
  
}

void lst_insFin(Lista* ls, void* elem){
 //Matheus 
  
}

void *lst_retIni(Lista* ls){
 //Matheus 
  
}

void *lst_retFin(Lista* ls){
 //Matheus 
  
}

void lst_posIni(Lista* ls){
 //JP 
  
}

void lst_posFin(Lista* ls){
  //JP
  
}

void *lst_prox(Lista* ls){
  //JG
  
}

void *lst_ant(Lista* ls){
  //JG
  
}

void lst_libera(Lista* ls){
  //JG
  
}
