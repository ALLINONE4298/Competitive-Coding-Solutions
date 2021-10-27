#include <stdio.h>

void balanceLeft(float* bal, int wa){
    if((*bal >= (wa+0.5)) && (wa % 5 == 0) && (wa > 0)&& (wa <= 2000))
        *bal -= (wa + 0.50);
    printf("%.2f",*bal);
}

int main() {
	float balance=0;
	int withdrawAmount=0;
	scanf("%d %f",&withdrawAmount,&balance);
	balanceLeft(&balance,withdrawAmount);
	return 0;
}
