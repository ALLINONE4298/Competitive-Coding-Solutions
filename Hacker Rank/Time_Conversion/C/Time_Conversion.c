//Solution in C 

#include<stdio.h>
int main() 
{
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;      
    if (strcmp(t12,"PM")==0 && hh!=12) 
      hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) 
      hh = 0 ;   
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
