#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#include "fila.h"

struct fila {
  Lista *lst;
 };
 
Fila *fila_cria(void){
  Fila *f = (Fila*)malloc(sizeof(Fila));
  if (f==NULL) {
    printf("\nMemória Insuficiente --> fila_cria()\n");
    exit(1);
  }
  Lista * ls = lst_cria();
  f->lst = ls;
  
  return f;
}
 
int fila_vazia(Fila *f) {
 return lst_vazia(f->lst); //propria lst_vazia retorna 1 ou 0
  // if (f->lst->tam == 0){
  //   return 1;
  // } else {
  //   return 0;
  // }
}
 
void fila_enq(Fila *f, void *elem){
  lst_insFin(f->lst,elem);
}
  
void *fila_deq(Fila *f){
  if(fila_vazia(f)){
    return NULL;
  }
  return lst_retIni(f->lst);
}

void fila_libera(Fila *f){
  lst_libera(f->lst);
  free(f);
  return;
}

 
 
