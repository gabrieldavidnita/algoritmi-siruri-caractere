#ifndef COPIERE_COMPARARE_H_INCLUDED
#define COPIERE_COMPARARE_H_INCLUDED

void lipesteCuSpatiu(char a[],char b[],char rez[]){
    strcpy(rez,a);
    if(strlen(a)>0&&strlen(b)>0)strcat(rez," ");
    strcat(rez,b);
}

int primulInOrdine(char a[],char b[]){
    int x=strcmp(a,b);
    if(x<0)
        return 1;
    if(x>0)
    return 2;
    return 0;
}


void primulAlfabetic(char c[][31],int n,char rez[]){
    strcpy(rez,c[0]);
    for(int i=1;i<n;i++){
        if(strcmp(c[i],rez)<0)
            strcpy(rez,c[i]);
    }
}


void ordoneazaDupaLungime(char c[][31],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a=strlen(c[i]),b=strlen(c[j]);
            if(a>b||(a==b&&strcmp(c[i],c[j])>0)){
                char aux[31];
                strcpy(aux,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],aux);
            }
        }
    }
}


int cuvinteDistincte(char c[][31],int n){
    int nr=0;
    for(int i=0;i<n;i++){
        bool gasit=false;
        for(int j=0;j<i;j++){
            if(strcmp(c[i],c[j])==0)
                gasit=true;
        }
        if(!gasit)
            nr++;
    }
    return nr;
}


#endif // COPIERE_COMPARARE_H_INCLUDED
