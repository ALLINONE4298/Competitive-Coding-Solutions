// Coding Section

#include <stdio.h>

void miniMaxSum(long A[], int size) {
    long minSum=0,maxSum=0;
    int i=0,min=0,max=0;
    for(i=0;i<size;i++){
        if(A[i] > A[max])
            max = i;
        if(A[i] < A[min])    
            min = i;
    }
    for(i=0;i<size;i++){
        if(i != max)
            minSum += A[i];
        if(i != min)
            maxSum += A[i];      
    }
    printf("%ld %ld",minSum,maxSum);

}

int main(){
    long arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%ld",&arr[i]);
    }

    miniMaxSum(arr,5);

    return 0;
}
