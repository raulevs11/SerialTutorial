#include "meniu.h"

void meniu_principal() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    while (true) {



        SetConsoleTextAttribute(hConsole, 7);
        printf("-----------------------------\n");
        printf("Seriale de Raul Oancea\n\n");

        // lista cu serii;
        int i = 0;
        for(i=0;i<model.nr_serii;i++){
         printf("%s\n",model.serii[i].titlu);
        }
        printf("-----------------------------\n");

        //;inia de comanda
        SetConsoleTextAttribute(hConsole, 2);
        printf("\n> ");
        SetConsoleTextAttribute(hConsole, 7);

        char input[30];

        gets(input);
        char* commanda = strtok(input, " ");

        if (strcmpi(commanda, "exit") == 0) {
            salvare_date();
            return;
        }
        else if (strcmpi(commanda,"ns") == 0) {
            char *titlu = strtok(NULL, " ");

            // TODO verifica daca exista deja serialul, si pune o eraoare daca da
            adaugare_serie(titlu);

            SetConsoleTextAttribute(hConsole, 2);
            printf("Serialul cu titlul %s a fost adaugat cu succes.\n\n", titlu);
            SetConsoleTextAttribute(hConsole, 7);
        }
        else if (strcmpi(commanda,"ne")== 0){
            char *titlu_serial =strtok(NULL," ");
            char *titlu_ep= strtok (NULL," ");
            char *sezon_s=strtok(NULL," ");
            char *ep_s=strtok(NULL," ");

            unsigned int sezon = atoi(sezon_s);
            unsigned int ep = atoi(ep_s);

            adaugare_episod(titlu_serial,titlu_ep,sezon,ep);
        }
        else if(strcmpi(commanda,"list")== 0){
            print_model(model);
        }
        else {
            SetConsoleTextAttribute(hConsole, 4);
            printf("Incorrect Command.\n\n");
        }


    }
}
