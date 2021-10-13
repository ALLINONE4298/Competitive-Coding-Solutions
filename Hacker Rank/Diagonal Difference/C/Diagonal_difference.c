// // Given a square matrix, calculate the absolute difference between the sums of its diagonals.

// // For example, the square matrix arr is shown below:

// // 1 2 3 
// // 4 5 6 
// // 9 8 9

// // The left - to - right diagonal = 1+5+9 = 15. The right to left diagonal = 3+5+9 = 17.
// // Their absolute difference is 

// // |15  17| = 2

// // Functional description
// // Complete the diagonalDifference function in th editor below

// // diagonalDifference takes the following parameter:
// // -> int arr[n][m]: an array of integers

// // Return
// // -> int: the absolute diagonal difference

// // input format 

// // The first line constaind a single integer n, the number of rows and columns in the square matrix arr.
// // Each of the next n lines describes a row, row[i], and consists of n space-separated integers arr[i][j].

// // Constraints
// // -> 100<=arr[i][j]<=100

// // output format
// // return the absolute diffrence between the sums of the matrix's two diagonals as single integer.

// sample input

// 3
// 11 2 4
// 4 5 6
// 10 8 -12

// sample output 
// 15

// coding section:

#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  int arr[100][100], n, i, j, left_sum = 0, right_sum = 0, result;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
      if (i == j)
      {
        left_sum += arr[i][j];
      }
      if (i + j == n - 1)
      {
        right_sum += arr[i][j];
      }
    }
  }

  result = abs(left_sum - right_sum);
  printf("%d", result);

  return 0;
}