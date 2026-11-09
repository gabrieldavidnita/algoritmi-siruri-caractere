#ifndef STERGERE_INSERARE_H_INCLUDED
#define STERGERE_INSERARE_H_INCLUDED
//5.1
void faraVocale(char s[]){
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c>='A'&&c<='Z')c+=32;
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}

//5.2
void normalizeazaSpatii(char s[]){
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' '){
            s[j++]=s[i];
        }else if(j>0&&s[j-1]!=' '){
            s[j++]=' ';
        }
    }
    if(j>0&&s[j-1]==' ')
        j--;
    s[j]='\0';
}


void dubleazaVocale(char s[]){
    char t[256];
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        char m=c;
        if(m>='A'&&m<='Z')m+=32;
        t[j++]=c;
        if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'){
            t[j++]=c;
        }
    }
    t[j]='\0';
    strcpy(s,t);
}


void faraVecineEgale(char s[]){
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(i==0||s[i]!=s[i-1]){
            s[j++]=s[i];
        }
    }
    s[j]='\0';
}


void insereazaDupa(char s[],char c,char d){
    char t[256];
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        t[j++]=s[i];
        if(s[i]==c)
            t[j++]=d;
    }
    t[j]='\0';
    strcpy(s,t);
}


#endif // STERGERE_INSERARE_H_INCLUDED
