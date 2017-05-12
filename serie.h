#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED

#include"episod.h"
#include<stdio.h>
#include"tools.h"

typedef struct{
    Episod episoade[100];
    unsigned int nr_ep;
    char titlu[20];
} Serie;

void print_serie(Serie s);
Serie make_serie(char titlu[20]);
#endif // SERIE_H_INCLUDED
