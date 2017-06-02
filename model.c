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
void adaugare_episod1(char titlu_serie[20],char titlu_episod[20]){

    // Verificare exitenta serie
    if(!exista(model.serii, model.nr_serii,titlu_serie)){
        // Daca nu exista,e bai
        printf("Eroare");
    }
    else {
        // Daca exosta o cautam
        int i = 0;
        for(i=0;i<model.nr_serii;i++){
            if(strcmp(model.serii[i].titlu,titlu_serie)== 0) {
                // Am gasit seria

                Episod episod_nou;
                if (model.serii[i].nr_ep == 0) {
                    // Daca este primul epizod din serie
                    episod_nou = makeEpisod(1, 1, titlu_episod);
                }
                else {
                    // daca nu este primul, me uitam, la ultimukl episod
                    Episod ultimul_episod = model.serii[i].episoade[model.serii[i].nr_ep-1];

                    unsigned int sezon = ultimul_episod.sezon;
                    unsigned int epizod = ultimul_episod.nr_ep;
                    epizod++;

                    episod_nou = makeEpisod(sezon, epizod, titlu_episod);
                }

                // inseram
                model.serii[i].episoade[model.serii[i].nr_ep] = episod_nou;
                model.serii[i].nr_ep++;
            }
        }
    }
}

