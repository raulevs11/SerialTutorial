#ifndef STRUCTURI_H_INCLUDED
#define STRUCTURI_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char titlu[20];
    unsigned int sezon;
    unsigned int nr_ep;
} Episod;

typedef struct{
    Episod episoade[100];
    unsigned int nr_ep;
    char titlu[20];
} Serie;

typedef struct{
    Serie serii[100];
    unsigned int nr_serii;
} Model;

// Functii
void print_episod(Episod e);
Episod intr_episod_simplu();
Episod intr_episod();
Episod makeEpisod(unsigned int s, unsigned int e, char t[]);

#endif // STRUCTURI_H_INCLUDED
