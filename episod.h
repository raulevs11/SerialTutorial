#ifndef EPISOD_H_INCLUDED
#define EPISOD_H_INCLUDED

#include<stdio.h>
#include<string.h>

typedef struct{
    char titlu[20];
    unsigned int sezon;
    unsigned int nr_ep;
} Episod;

void print_episod(Episod e);
Episod intr_episod_simplu();
Episod intr_episod();
Episod makeEpisod(unsigned int s, unsigned int e, char t[]);

#endif // EPISOD_H_INCLUDED
