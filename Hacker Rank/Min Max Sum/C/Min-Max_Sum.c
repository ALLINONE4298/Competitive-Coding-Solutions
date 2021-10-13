// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

// Example
// arr=[1,3,5,7,9]

// The minimum sum is 1 + 3 + 5 + 7 = 16 and the maximum sum is 3 + 5 + 7 + 9 = 24. The function prints 
// 16 24

// Function Description
// Complete the miniMaxSum function in the editor below.
// miniMaxSum has the following parameter(s):
// arr: an array of 5 integers

// Print
// Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.

// Input format
// A single line of five spaces separated integers.

// Constraints
// 1 <= arr[i] <= 10^9

// Output format
// Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

// sample input
// 1 2 3 4 5 

// sample output
// 10 14

// Explanation
// The numbers are 1, 2, 3, 4, and 5. Calculate the following sums using four of the five integers:
// 1. Sum everything except 1, the sum is 2 + 3 + 4 + 5 = 14
// 2. Sum everything except 2, the sum is 1 + 3 + 4 + 5 = 13
// 3. Sum everything except 3, the sum is 1 + 2 + 4 + 5 = 12
// 4. Sum everything except 4, the sum is 1 + 2 + 3 + 5 = 11
// 5. Sum everything except 5, the sum is 1 + 2 + 3 + 4 = 10

// Hints: Beware of integer overflow! Use 64-bit integer.

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
