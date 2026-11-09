#ifndef CUVINTE_STRTOK_H_INCLUDED
#define CUVINTE_STRTOK_H_INCLUDED
//8.1
int numarPropozitii(char s[]){
    int nr=0;
    bool exista=false;
    for(int i=0;;i++){
        if(s[i]=='.'||s[i]=='!'||s[i]=='?'||s[i]=='\0'){
            if(exista)
                nr++;
            exista=false;
            if(s[i]=='\0')
                break;
        }else if(s[i]!=' '){
            exista=true;
        }
    }
    return nr;
}

//8.2
void alKlea(char s[],char sep[],int k,char rez[]){
    char t[256];
    strcpy(t,s);
    rez[0]='\0';
    int nr=0;
    char*p=strtok(t,sep);
    while(p!=NULL){
        nr++;
        if(nr==k){
            strcpy(rez,p);
            return;
        }
        p=strtok(NULL,sep);
    }
}

//8.3
void acronim(char s[],char rez[]){
    char t[256];
    strcpy(t,s);
    int j=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        rez[j++]=p[0];
        p=strtok(NULL," ");
    }
    rez[j]='\0';
}

//8.4
void inverseazaCuvintele(char s[]){
    char c[50][31];
    char t[256];
    strcpy(t,s);
    int n=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        strcpy(c[n++],p);
        p=strtok(NULL," ");
    }
    s[0]='\0';
    for(int i=n-1;i>=0;i--){
        strcat(s,c[i]);
        if(i>0)
            strcat(s," ");
    }
}

//8.5
int cuvinteUnice(char s[]){
    char c[50][31];
    char t[256];
    strcpy(t,s);
    int n=0,nr=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        strcpy(c[n++],p);
        p=strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        int aparitii=0;
        for(int j=0;j<n;j++){
            if(strcmp(c[i],c[j])==0)
                aparitii++;
        }
        if(aparitii==1)
            nr++;
    }
    return nr;
}


#endif // CUVINTE_STRTOK_H_INCLUDED
