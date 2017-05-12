#include"serie.h"


void print_serie(Serie s){
    printf("%s\n",s.titlu);
    int i;
    for(i=0;i<s.nr_ep;i++){
        print_episod(s.episoade[i]);
        printf("\n");
    }
}

Serie make_serie(char titlu[20]){
    Serie serie;
    strcpy(serie.titlu,titlu);
    serie.nr_ep=0;

    return serie;
}
 bool exista(Serie serii[20],unsigned int nr_serii,char titlu[20]){
 int i;
    for(i=0;i<=nr_serii;i++){
        if(strcmp(titlu,serii[i].titlu)==0){
            return true;
        }
    }
    return false;
 }
