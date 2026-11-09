#ifndef PARCURGERE_LUNGIME_H_INCLUDED
#define PARCURGERE_LUNGIME_H_INCLUDED
#include <cstring>

int numarSpatii(char s[]){
    int nr=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ')
            nr++;
    }
    return nr;
}


int ultimaPozitie(char s[],char c){
    int poz=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c)
        poz=i;
    }
    return poz;
}


int celMaiLungBloc(char s[]){
    if(s[0]=='\0')
        return 0;
    int maxim=1,nr=1;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]==s[i-1])
            nr++;
        else
        nr=1;
        if(nr>maxim)
            maxim=nr;
    }
    return maxim;
}


bool esteCrescator(char s[]){
    for(int i=1;s[i]!='\0';i++){
        if(s[i]<s[i-1])
            return false;
    }
    return true;
}


int primulDiferit(char s[]){
    for(int i=1;s[i]!='\0';i++){
        if(s[i]!=s[0])
            return i;
    }
    return -1;
}
#endif
#endif // PARCURGERE_LUNGIME_H_INCLUDED
