#ifndef INVERSARE_PALINDROM_H_INCLUDED
#define INVERSARE_PALINDROM_H_INCLUDED

void lipesteOglinditul(char s[]){
    int n=strlen(s);
    for(int i=n-1;i>=0;i--){
        s[2*n-1-i]=s[i];
    }
    s[2*n]='\0';
}


//palindromFaraSpatii?



int prefixPalindrom(char s[]){
    int n=strlen(s);
    for(int k=n;k>=1;k--){
        bool ok=true;
        for(int i=0;i<k/2;i++)
            {
            if(s[i]!=s[k-1-i])
            ok=false;
        }
        if(ok)
        return k;
    }
    return 0;
}


void inverseazaSecventa(char s[],int i,int j){
    while(i<j){
        char aux=s[i];
        s[i]=s[j];
        s[j]=aux;
        i++;
        j--;
    }
}

bool verificaInterval(char s[],int i,int j){
    while(i<j){
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool palindromFaraUnul(char s[]){
    int i=0,j=strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]){
            return verificaInterval(s,i+1,j)||verificaInterval(s,i,j-1);
        }
        i++;
        j--;
    }
    return true;
}


#endif // INVERSARE_PALINDROM_H_INCLUDED
