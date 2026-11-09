#ifndef CIFRUL_CEZAR_H_INCLUDED
#define CIFRUL_CEZAR_H_INCLUDED

void decripteaza(char s[],int k){
    k=k%26;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]='a'+(s[i]-'a'+26-k)%26;
        }else if(s[i]>='A'&&s[i]<='Z'){
            s[i]='A'+(s[i]-'A'+26-k)%26;
        }
    }
}


void substituie(char s[],char cheie[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=cheie[s[i]-'a'];
        }
    }
}


//cezarPeCuvinte??

// pozitiiLitere??


 //rotesteStanga??
}


#endif // CIFRUL_CEZAR_H_INCLUDED
