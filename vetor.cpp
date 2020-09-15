#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "vetor.h"

struct vetor {
   float x, y;
};

Vetor *vet_cria(float x, float y){
    Vetor* vec = (Vetor*) malloc(sizeof(Vetor));
    if (vec==NULL){
        printf("Memória Insuficiente");
        exit(1);
    }
    vec->x = x;
    vec->y = y;
    
    //printf("Vetor criado x=%f e y=%f", vec->x, vec->y);    
    return vec;
}

Vetor *vet_soma(Vetor* p1, Vetor* p2){
    Vetor* soma = (Vetor*) malloc(sizeof(Vetor));
     if (soma==NULL){
        printf("Memória Insuficiente");
        exit(1);
    }
    soma->x = p1->x + p2->x;
    soma->y = p1->y + p2->y;

    return soma;
}

float vet_norma(Vetor* vec){
    float norma;
    norma = sqrt((vec->x*vec->x)+(vec->y*vec->y)); 
    return norma;
}

float vet_prod_int(Vetor* v1, Vetor* v2){
    float prod;
    prod = (v1->x+v2->x)*(v1->y+v2->y);
    return prod;
}

char *vet_format(Vetor* v1, char* s){
    char* str = (char*) malloc(10*sizeof(char));
    if (str == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
   } 
    sprintf(str, "(%02f,%02f)", v1->x, v1->y); 
    return str;
}

void vet_libera(Vetor* v){
    free(v);
}
