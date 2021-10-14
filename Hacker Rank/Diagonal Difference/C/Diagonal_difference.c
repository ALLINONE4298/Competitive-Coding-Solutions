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
