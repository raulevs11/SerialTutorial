#include <stdio.h>
#include <stdlib.h>
#include "structuri.h"

int main()
{
    testModel();
    return 0;
}

void testSerie() {
    Serie test;
    strcpy(test.titlu,"Prison Break");

    test.episoade[0] = makeEpisod(1, 1, "Pilot");
    test.episoade[1] = makeEpisod(1, 2, "hei");
    test.episoade[2] = makeEpisod(1, 3, "pilot2");

    test.nr_ep = 3;


    print_serie(test);
}
void testModel(){
    Model test1;

    Serie test;
    strcpy(test.titlu,"Prison Break");

    test.episoade[0] = makeEpisod(1, 1, "Pilot");
    test.episoade[1] = makeEpisod(1, 2, "hei");
    test.episoade[2] = makeEpisod(1, 3, "pilot2");

    test.nr_ep = 3;

     Serie test2;
    strcpy(test2.titlu,"The walking dead");

    test2.episoade[0] = makeEpisod(1, 1, "Pilot");
    test2.episoade[1] = makeEpisod(1, 2, "hei");
    test2.episoade[2] = makeEpisod(1, 3, "pilot2");

    test2.nr_ep = 3;

    test1.serii[0] = test;
    test1.serii[1] = test2;
    test1.nr_serii = 2;

    print_model(test1);
}

void testEpisod() {
    Episod test;
    strcpy(test.titlu,"Pilot");
    test.sezon=13;
    test.nr_ep=14;

    Episod test2;
    test2 = intr_episod();
    print_episod(test2);
}
