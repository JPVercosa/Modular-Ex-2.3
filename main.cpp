#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "vetor.h"

int main(void) {
  //char * vet;
  Fila *f = fila_cria();
  Vetor *v1 = vet_cria(1.0,1.0);
  Vetor *v2 = vet_cria(2.0,2.0);
  Vetor *v3 = vet_cria(3.0,3.0);

  fila_enq(f,v1);
  fila_enq(f,v2);
  fila_enq(f,v3);

  while(!fila_vazia(f)) {
    Vetor *aux = (Vetor *) fila_deq(f);
    char vet[20];
    puts(vet_format(aux,vet));
  }

  fila_libera(f);
  return 0;
}



/*######################################
            ##Main T1.1##
####################################*/

/*
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void exibeLista(Lista *f) {
  int *aux;
  puts("=== Elementos da Lista ***");
  lst_posIni(f);
  aux=(int*)lst_prox(f);
  while(aux) {
    printf("%d\n",*aux);
    aux=(int*)lst_prox(f);
    }
}

int main(void) {
  Lista *f=lst_cria();
  int *a=(int*) malloc(sizeof(int));
  int *b=(int*) malloc(sizeof(int));
  int *c=(int*) malloc(sizeof(int));
  int *d=(int*) malloc(sizeof(int));
  int *aux;
  *a=10;
  *b=20;
  *c=30;
  *d=40;
  
  lst_insFin(f,a);
  lst_insFin(f,b);
  lst_insFin(f,c);
  lst_insFin(f,d);
  
  exibeLista(f);
  aux=(int*)lst_retIni(f);
  printf("*** Elemento Retirado %d ***\n",*aux);
  
  exibeLista(f);
  aux=(int*)lst_retIni(f);
  printf("*** Elemento Retirado %d ***\n",*aux);
  
  exibeLista(f);
  aux=(int*)lst_retFin(f);
  printf("*** Elemento Retirado %d ***\n",*aux);
  
  exibeLista(f);
  aux=(int*)lst_retFin(f);
  printf("*** Elemento Retirado %d ***\n",*aux);
  
  exibeLista(f);
  exibeLista(f);
  
  lst_libera(f);
  
  return 0;
  }
*/
