#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct fila {
  Lista *lst;
 };
 
 /*Fila *fila_cria(void elem){

  return 0;
}*/
 
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
  free (ls);
  return;
}

 
 
