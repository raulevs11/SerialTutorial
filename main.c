#include "model.h"

int main()
{
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
    return 0;
}
