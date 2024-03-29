bool isIsomorphic(char * s, char * t){
    int N1=strlen(s);
    int N2=strlen(s);
    if(N1!=N2) return false;

    char table1[256]={};
    char table2[256]={};

    for(int i=0;i<N1;i++){
        char c1=s[i],c2=t[i];
        if(table1[c1]==0 && table2[c2]==0){
            table1[c1]=c2;
            table2[c2]=c1;
        }
        if(table1[c1]==c2 && table2[c2]==c1){
        }else return false;
    }
    return true;
}
