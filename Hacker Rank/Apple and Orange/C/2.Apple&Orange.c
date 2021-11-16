#include<stdio.h>

void countApplesAndOranges(int s,int t,int a,int b,int m,int n,int appleFalls[],int orangeFalls[]){
    int i=0,j=0,noOfApplesFall=0,noOfOrangesFall=0;
    
    for(i=0; i<m; i++){
        appleFalls[i] += a;
        if((appleFalls[i] >= s) && appleFalls[i] <= t)
        noOfApplesFall++;
    }
    for(j=0;j<n;j++){
        orangeFalls[j] += b;
        if((orangeFalls[j] >= s) && orangeFalls[j] <= t)
        noOfOrangesFall++;
    }
    printf("%d\n%d",noOfApplesFall,noOfOrangesFall);
}

int main(){
    int s,t,a,b,m,n;
    scanf("%d %d",&s,&t); // input distance of house
    scanf("%d %d",&a,&b); // input position of apple(a) & orange tree(b)
    scanf("%d %d",&m,&n); // no. of apple falls(m) & orange falls(n)
    
    int appleFalls[m],orangeFalls[n];
    
    for(int i=0;i<m;i++)
    scanf("%d",&appleFalls[i]); // position where apple falls
    
    for(int i=0;i<n;i++)
    scanf("%d",&orangeFalls[i]); // position where orange falls
    
    countApplesAndOranges(s,t,a,b,m,n,appleFalls,orangeFalls);
    
    return 0;
}
