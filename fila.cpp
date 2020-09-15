#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct fila {
  Lista *lst;
 };
 
Fila *fila_cria(void elem){
  Fila *f = (Fila*)malloc(sizeof(Fila));
  if (f==NULL) {
    printf("\nMemória Insuficiente --> fila_cria()\n")
    exit(1);
  }
  ls = lst_cria();
  f->lst = ls;
  
  return f;
}
 
int fila_vazia(Fila *f) {
  if (f->lst->tam == 0){
    return 1;
  } else {
    return 0;
}
 
/*void fila_enq(Fila *f, void *elem){
 
  return 0;
}*/
  
/*void *fila_deq(Fila *f){

}*/

void fila_libera(fila *f){
  lst_libera(f->lst);
  free (f);
  return;
}

 
 
