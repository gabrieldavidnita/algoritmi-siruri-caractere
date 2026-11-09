#ifndef CUVANTUL_CEL_MAI_LUNG_H_INCLUDED
#define CUVANTUL_CEL_MAI_LUNG_H_INCLUDED

void celMaiLungCuvant(char s[],char rez[]){
    char t[256];
    strcpy(t,s);
    rez[0]='\0';
    int maxim=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        int n=strlen(p);
        if(n>maxim){
            maxim=n;
            strcpy(rez,p);
        }
        p=strtok(NULL," ");
    }
}


int lungimeCeluiMaiScurt(char s[]){
    char t[256];
    strcpy(t,s);
    char*p=strtok(t," ");
    if(p==NULL)
        return 0;
    int minim=strlen(p);
    while(p!=NULL){
        int n=strlen(p);
        if(n<minim)
        minim=n;
        p=strtok(NULL," ");
    }
    return minim;
}


int cuvinteDeLungime(char s[],int k){
    char t[256];
    strcpy(t,s);
    int nr=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        if(strlen(p)==k)
            nr++;
        p=strtok(NULL," ");
    }
    return nr;
}


int acelasiCapat(char s[]){
    char t[256];
    strcpy(t,s);
    int nr=0;
    char*p=strtok(t," ");
    while(p!=NULL){
        int n=strlen(p);
        if(p[0]==p[n-1])
            nr++;
        p=strtok(NULL," ");
    }
    return nr;
}


void maiMulteVocale(char s[],char rez[]){
    char t[256];
    strcpy(t,s);
    rez[0]='\0';
    int maxim=-1;
    char*p=strtok(t," ");
    while(p!=NULL){
        int nr=0;
        for(int i=0;p[i]!='\0';i++){
            char c=p[i];
            if(c>='A'&&c<='Z')c+=32;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                nr++;
        }
        if(nr>maxim){
            maxim=nr;
            strcpy(rez,p);
        }
        p=strtok(NULL," ");
    }
}


#endif // CUVANTUL_CEL_MAI_LUNG_H_INCLUDED
