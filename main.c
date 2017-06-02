#include "fisier.h"

int main()
{
    init_model();

    // urmeaza sa fie inlocuit cu citire din fisier
    /*adaugare_serie("Flash");
    adaugare_serie("Blacklist");

    adaugare_episod1( "Flash","Pilot");
    adaugare_episod1( "Blacklist","House");
    adaugare_episod1( "Blacklist","House2");
    adaugare_episod1( "Blacklist","House3");
    adaugare_episod1( "Blacklist","House4");
    adaugare_episod( "Blacklist","House4", 2, 1);
    adaugare_episod1( "Blacklist","House4");
    adaugare_episod1( "Blacklist","House4");
    adaugare_episod1( "Blacklist","House4");
    adaugare_episod1( "Flash","Mare");
    adaugare_episod1( "Blacklist","Boat");
*/
    //testaresalvare();
    //meniu_principal();
    citire_date();
    //printf("%d",model.nr_serii);
    //print_model(model);
    meniu_principal();

    return 0;
}
