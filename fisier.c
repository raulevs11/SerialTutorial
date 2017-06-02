#include "fisier.h"



void salvare_date(){
    char path[] = "date.in";

    FILE* file = fopen(path, "w");
    int i=0,j=0;
    fprintf(file,"%d\n",model.nr_serii);

    for(i=0;i<model.nr_serii;i++){
        fprintf(file,"%s\n",model.serii[i].titlu);
        fprintf(file,"%d\n",model.serii[i].nr_ep);
        for(j=0;j<model.serii[i].nr_ep;j++){
            Episod e = model.serii[i].episoade[j];
            fprintf(file,"S%02dE%02d %s\n",e.sezon,e.nr_ep,e.titlu);
        }
    }


    fclose(file);
}

void citire_date(){
    char path[] = "date.in";
    int i=0,j=0;

    FILE* file=fopen(path,"r");

    fscanf(file,"%d%",&model.nr_serii);

    for(i=0;i<model.nr_serii;i++)
    {
        fscanf(file,"%s",model.serii[i].titlu);
        fscanf(file,"%d",&model.serii[i].nr_ep);
        for(j=0;j<model.serii[i].nr_ep;j++){
            // Citim o linie
            char linie[20];
            fscanf(file, "%s", linie);

            // Dewclaram chestii
            unsigned int s,e;
            char titlu[20];
            char tok[20];

            // citim si convertim in int sezonului
            strcpy(tok,strtok(linie, "S|E"));
            s = atoi(tok);

            // citim numarul episodului
            strcpy(tok, strtok(NULL, "S|E"));
            e = atoi(tok);

            // citim titlul episodului
            fscanf(file, "%s", titlu);

            // Punem in model
            model.serii[i].episoade[j].nr_ep=e;
            model.serii[i].episoade[j].sezon=s;
            strcpy(model.serii[i].episoade[j].titlu,titlu);
        }
    }

    fclose(file);
}

void testaresalvare() {
    salvare_date();
}
