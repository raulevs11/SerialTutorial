#include "episod.h"

void print_episod(Episod e) {
    printf("S%02dE%02d %s",e.sezon,e.nr_ep,e.titlu);
}

Episod intr_episod_simplu() {
    Episod e;
    printf("Sezon: \n> ");
    scanf("%d",&e.sezon);
    printf("Episod: \n> ");
    scanf("%d",&e.nr_ep);
    printf("Titlu: \n> ");
    scanf("%s",e.titlu);
    return e;
}

Episod intr_episod(){
    Episod e;
    scanf("S%dE%d %s", &e.sezon, &e.nr_ep, e.titlu);
    return e;
}

Episod makeEpisod(unsigned int s, unsigned int e, char t[]) {
    Episod temp;
    strcpy(temp.titlu, t);
    temp.sezon  = s;
    temp.nr_ep = e;

    return temp;
}
