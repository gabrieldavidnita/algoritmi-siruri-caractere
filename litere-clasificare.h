#ifndef LITERE_CLASIFICARE_H_INCLUDED
#define LITERE_CLASIFICARE_H_INCLUDED

void initialeMari(char s[]){
    bool inceput=true;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            inceput=true;
        }else{
            if(inceput){
                if(s[i]>='a'&&s[i]<='z')s[i]-=32;
            }else{
                if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
            }
            inceput=false;
        }
    }
}

void schimbaCazul(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
}


int numarConsoane(char s[]){
    int nr=0;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c>='A'&&c<='Z')c+=32;
        if(c>='a'&&c<='z'){
            if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
                nr++;
        }
    }
    return nr;
}


void pastreazaCifrele(char s[]){
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}


char tipPredominant(char s[]){
    int mari=0,mici=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z')
            mari++;
        if(s[i]>='a'&&s[i]<='z')
        mici++;
    }
    if(mari>mici)return 'M';
    if(mici>mari)return 'm';
    return '=';
}


#endif // LITERE_CLASIFICARE_H_INCLUDED
