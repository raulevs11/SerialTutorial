#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include"serie.h"

typedef struct{
    Serie serii[100];
    unsigned int nr_serii;
} Model;

Model model;

void init_model();
void print_model(Model m);
void adaugare_serie( char titlu[20]);
void adaugare_episod( char titlu_serie[20],char titlu_episod[20],unsigned int sezon,unsigned int nr_ep);


#endif // MODEL_H_INCLUDED
