#ifndef FRECVENTA_LITERE_H_INCLUDED
#define FRECVENTA_LITERE_H_INCLUDED

int litereDiferite(char s[]){
    int f[26]={0},nr=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f[i]>0)nr++;
    }
    return nr;
}


char literaFrecventa(char s[]){
    int f[26]={0},maxim=0;
    char litera='?';
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f[i]>maxim){
            maxim=f[i];
            litera='a'+i;
        }
    }
    return litera;
}

bool anagrame(char a[],char b[]){
    int f[26]={0};
    for(int i=0;a[i]!='\0';i++)
    f[a[i]-'a']++;
    for(int i=0;b[i]!='\0';i++)
        f[b[i]-'a']--;
    for(int i=0;i<26;i++)
    {
        if(f[i]!=0)
        return false;
    }
    return true;
}


int litereUnice(char s[]){
    int f[26]={0},nr=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f[i]==1)nr++;
    }
    return nr;
}


char primaLipsa(char s[]){
    int f[26]={0};
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f[i]==0)
            return 'a'+i;
    }
    return '-';
}


#endif // FRECVENTA_LITERE_H_INCLUDED
