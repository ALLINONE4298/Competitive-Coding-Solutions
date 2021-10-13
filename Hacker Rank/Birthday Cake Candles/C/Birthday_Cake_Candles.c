// Coding section

#include <stdio.h>

int birthdayCakeCandles(long candleHeights[], int noOfCandles) {
    int i,tallCandleCount=0,tallest=0;
    for(i=0;i<noOfCandles;i++){
        if(candleHeights[i] > candleHeights[tallest])
            tallest = i;
    }
    for(i=0;i<noOfCandles;i++){
        if(candleHeights[i] == candleHeights[tallest])
            tallCandleCount++;
    }
    return tallCandleCount;
}

int main(){
    int result,noOfCandles;
    scanf("%d",&noOfCandles);
    
    long candleHeights[noOfCandles];
    for (int i = 0; i < noOfCandles; i++) {
        scanf("%ld",&candleHeights[i]);
    }

    result = birthdayCakeCandles(candleHeights, noOfCandles);
    printf("%d",result);
    return 0;
}
