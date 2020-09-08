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
  
