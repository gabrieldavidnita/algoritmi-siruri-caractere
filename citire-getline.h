#ifndef CITIRE_GETLINE_H_INCLUDED
#define CITIRE_GETLINE_H_INCLUDED
//12.1
void liniaMaiLunga(char rez[]){
    char a[256],b[256];
    cin.getline(a,256);
    cin.getline(b,256);
    if(strlen(a)>=strlen(b))strcpy(rez,a);
    else strcpy(rez,b);
}

//12.2
int liniiCuLitera(char c){
    int n,nr=0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        char s[256];
        cin.getline(s,256);
        if(strchr(s,c)!=NULL)
            nr++;
    }
    return nr;
}

//12.3
int numaraPanaLaGoala(){
    char s[256];
    int nr=0;
    while(cin.getline(s,256)){
        if(s[0]=='\0')
        nr++;
    }
    return nr;
}


//lungimeCuvantLung??

//celMaiLungDinText??


#endif // CITIRE_GETLINE_H_INCLUDED
