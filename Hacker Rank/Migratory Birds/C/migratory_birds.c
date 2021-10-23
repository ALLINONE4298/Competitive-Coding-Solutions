//migratory birds
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, type, argmax = 0;
    int stats[5] = {0};
    scanf("%d",&n);
    for(int types_i = 0; types_i < n; types_i++){
        scanf("%d",&type);
        stats[type-1]++;
    }
    for(int i = 0; i < 5; i++){
        if(stats[i] > stats[argmax]) argmax = i;
    }
    printf("%d\n", argmax+1);
    return 0;
}
