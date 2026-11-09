#ifndef SIR_NUMAR_H_INCLUDED
#define SIR_NUMAR_H_INCLUDED

int sumaCifreDinSir(char s[]){
    int suma=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
            suma+=s[i]-'0';
        }
    }
    return suma;
}


int celMaiMareDinCifre(char s[]){
    int f[10]={0},nr=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9')f[s[i]-'0']++;
    }
    for(int i=9;i>=0;i--){
        while(f[i]>0){
            nr=nr*10+i;
            f[i]--;
        }
    }
    return nr;
}


void inBinar(int n,char rez[]){
    if(n==0){
        strcpy(rez,"0");
        return;
    }
    int k=0;
    while(n>0){
        rez[k++]=n%2+'0';
        n/=2;
    }
    rez[k]='\0';
    for(int i=0,j=k-1;i<j;i++,j--){
        char aux=rez[i];
        rez[i]=rez[j];
        rez[j]=aux;
    }
}


int sumaNumerelor(char s[]){
    int suma=0,nr=0;
    for(int i=0;;i++){
        if(s[i]>='0'&&s[i]<='9'){
            nr=nr*10+s[i]-'0';
        }else{
            suma+=nr;
            nr=0;
        }
        if(s[i]=='\0')
            break;
    }
    return suma;
}


//adunaMari??


#endif // SIR_NUMAR_H_INCLUDED
