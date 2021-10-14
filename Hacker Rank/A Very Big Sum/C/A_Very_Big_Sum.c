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
