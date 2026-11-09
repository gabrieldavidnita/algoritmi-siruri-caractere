#ifndef CAUTARE_INLOCUIRE_H_INCLUDED
#define CAUTARE_INLOCUIRE_H_INCLUDED

int aparitiiSubsir(char s[],char t[]){
    int nr=0;
    if(t[0]=='\0')
        return 0;
    for(int i=0;s[i]!='\0';i++){
        if(strstr(s+i,t)==s+i)
            nr++;
    }
    return nr;
}


int ultimaAparitie(char s[],char t[]){
    int poz=-1;
    if(t[0]=='\0')
        return -1;
    for(int i=0;s[i]!='\0';i++){
        if(strstr(s+i,t)==s+i)
            poz=i;
    }
    return poz;
}


void inlocuiesteToate(char s[],char vechi[],char nou[]){
    if(vechi[0]=='\0')return;
    char rez[256];
    int i=0,j=0,n=strlen(vechi),m=strlen(nou);
    while(s[i]!='\0'){
        if(strstr(s+i,vechi)==s+i){
            for(int k=0;k<m;k++)
                rez[j++]=nou[k];
            i+=n;
        }else{
            rez[j++]=s[i++];
        }
    }
    rez[j]='\0';
    strcpy(s,rez);
}


void stergeSubsir(char s[],char t[]){
    if(t[0]=='\0')return;
    int n=strlen(t);
    char*p=strstr(s,t);
    while(p!=NULL){
        int i=0;
        do{
            p[i]=p[i+n];
        }while(p[i++]!='\0');
        p=strstr(s,t);
    }
}


//aparitiiCuvant??



#endif // CAUTARE_INLOCUIRE_H_INCLUDED
