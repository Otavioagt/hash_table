#ifndef __TAB_HASH_H__
#define __TAB_HASH_H__

#include <stdio.h>
#include <stdlib.h>

#define TAM_HASH 10

struct est_no_hash {
    int chave;
    char valor;
    struct est_no_hash *prox;
};

typedef struct est_no_hash tipo_no_hash;

struct est_tab_hash {
    tipo_no_hash *tabela_hash[TAM_HASH];
};

typedef struct est_tab_hash tipo_tab_hash;

void inicializarTabHash(tipo_tab_hash*);
tipo_no_hash* alocaNoHash(int chave, char dado);
int funcaoHash(int);
void insereTabHash(tipo_tab_hash*, int, char);
char removeTabHash(tipo_tab_hash*, int);
tipo_no_hash* buscaTabHash(tipo_tab_hash*, int);
void imprimeTabHash(tipo_tab_hash*);

#endif //__TAB_HASH_H__

