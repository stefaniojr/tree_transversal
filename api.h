#ifndef API_H_
#define API_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct arv Arv;

Arv *arv_criavazia(void);
Arv *insere(Arv *a, int chave);
Arv *busca(Arv *a, int chave);
void rec_preorder(Arv *a, void (*visit)(Arv *));
void rec_inorder(Arv *a, void (*visit)(Arv *));
void rec_postorder(Arv *a, void (*visit)(Arv *));
void printChave(Arv *a);
void arv_imprime(Arv *a);
Arv *arv_libera(Arv *a);

#endif /* API_H_ */