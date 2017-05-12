#include"model.h"

void print_model(Model m){
    int i;
    for(i=0;i<m.nr_serii;i++){
        print_serie(m.serii[i]);
    }
}

void adaugare_serie( char titlu[20]){
    Serie serie=make_serie(titlu);
    model.serii[model.nr_serii]=serie;
        model.nr_serii++;

}
void init_model(){
    model.nr_serii=0;

}
void adaugare_episod( char titlu_serie[20],char titlu_episod[20],unsigned int sezon,unsigned int nr_ep){

    if(!exista(model.serii,model.nr_serii,titlu_serie)){
            printf("Eroare");

    } else{
        Episod episod_nou = makeEpisod(sezon, nr_ep, titlu_episod);

        int i;
        for(i=0;i<=model.nr_serii;i++){
            if(strcmp(titlu_serie,model.serii[i].titlu)==0) {
                model.serii[i].episoade[model.serii[i].nr_ep] = episod_nou;
                model.serii[i].nr_ep++;
            }
        }
    }

}
