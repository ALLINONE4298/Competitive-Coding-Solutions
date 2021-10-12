// A very big sum
// In this challenge, you are required to calculate and print the sum of the elements in an array, 
// keeping in mind that some of those integers may be quite large.

// Functional Description

// Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.
// aVeryBigSum has the following parameters.
// => int ar[n]: an array of integers.

// Return
// => long: the sum of all array elements

// Input format
// The first line of the input consists of an integer n.
// The next ine contains n space-separated integers contained in the array.

// Output Format
// Return the integer sum of the elements in the array.

// Constraints
// 1<=n<=10
// 0<=ar[i]<=10^10


// Coding Section

#include<stdio.h>

int main(){

  int n;
  unsigned long int A[10],sum=0;

  scanf("%d", &n);
  while(n--){
  scanf("%ld ", &A[n]);
  sum += A[n];
  }

  printf("%ld", sum);

  return 0;
}

//Successfully Submitted