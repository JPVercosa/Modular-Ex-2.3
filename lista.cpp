#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct no{
  void *info;
  struct no *prox;
  struct no *ant;
}; 

typedef struct no No;

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
  if (lst_vazia(ls)) {
		printf("Lista Vazia");
    ls->corr = NULL;
 } 
  else {
		No temp = ls->ini;
		while(temp->prox != NULL) {
			if (temp->ant==NULL) {
				ls->corr = temp;
			}
			temp=temp->prox;
		}
}

void lst_posFin(Lista* ls){
  if (lst_vazia(ls)) {
		printf("Lista Vazia");
    ls->corr = NULL;
 } 
  else {
		No temp = ls->fin;
		while(temp->ant != NULL) {
			if (temp->prox==NULL) {
				ls->corr = temp;
			}
			temp=temp->ant;
		}
  
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
