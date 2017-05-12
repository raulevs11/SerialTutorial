#include "test.h"

void testSerie()
{
    Serie test;
    strcpy(test.titlu,"Prison Break");

    test.episoade[0] = makeEpisod(1, 1, "Pilot");
    test.episoade[1] = makeEpisod(1, 2, "hei");
    test.episoade[2] = makeEpisod(1, 3, "pilot2");

    test.nr_ep = 3;


    print_serie(test);
}

void testModel()
{
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

void testEpisod()
{
    Episod test;
    strcpy(test.titlu,"Pilot");
    test.sezon=13;
    test.nr_ep=14;

    Episod test2;
    test2 = intr_episod();
    print_episod(test2);
}

void testFunctionality1() {
    init_model();
    adaugare_serie("Flash");
    adaugare_serie("Blacklist");
    print_model(model);
    printf("--------------------\n");

    adaugare_episod( "Flash","Pilot",1,1);
    adaugare_episod( "Blacklist","House",3,2);
    adaugare_episod( "Flash","Mare",2,2);
    adaugare_episod( "Blacklist","Boat",3,3);
    print_model(model);
}
