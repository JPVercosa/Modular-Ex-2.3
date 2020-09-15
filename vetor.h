/*TAD Vetor */

typedef struct vetor Vetor;

Vetor *vet_cria(float x, float y);
Vetor *vet_soma(Vetor * v1, Vetor * v2);
float vet_norma(Vetor * v);
float bet_prod_int(Vetor * v1,Vetor * v2);
char *vet_format(Vetor * v,char * s);
void vet_libera(Vetor * v);
