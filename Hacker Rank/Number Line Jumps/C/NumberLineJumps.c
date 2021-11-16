#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    if((v1 > v2) && (x2 - x1) % (v2 - v1) == 0)
        return "YES";
    else 
        return "NO";
}

int main(){
    unsigned int x1,v1,x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    printf("%s",kangaroo(x1,v1,x2,v2));    
    return 0;
}
