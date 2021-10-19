#include <stdio.h>
#include <stdlib.h>

int ops_required(){
    int c=0,N,K;
    scanf("%d %d",&N,&K);
    char S[N];
    scanf("%s",S);
    
    for(int i=0; i<N/2; i++){
        if(S[i]!=S[N-i-1])
        c++;
    }
    return abs(K-c);
}

void main(){
    int T;
    scanf("%d",&T);
    while(T>0){
        printf("Case #%d: %d\n",T,ops_required());
        T--;
    }
}