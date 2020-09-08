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

Lista *lst_cria(void elem){
  //JG

}

int lst_vazia(Lista* ls){
 //JG
  
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
