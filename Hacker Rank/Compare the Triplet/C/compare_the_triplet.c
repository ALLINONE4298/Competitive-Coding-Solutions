// Coding Section

#include<stdio.h>

int main(){

  int A[3], B[3], i,AScore=0,BScore=0;
  scanf("%d %d %d", &A[0], &A[1], &A[2]);
  scanf("%d %d %d", &B[0], &B[1], &B[2]);

  for (i = 0; i < 3;i++){
    if(A[i]>B[i])
      AScore++;
    else if(A[i]<B[i])
      BScore++;  
  }

  printf("%d %d", AScore, BScore);

  return 0;
}
