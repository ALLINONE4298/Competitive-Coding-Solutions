//Coding Section

#include <stdio.h>

int main()
{
  int A[100], n, i, minus_no = 0, plus_no = 0, zeros = 0;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);

    if (A[i] < 0)
      minus_no++;
    else if (A[i] > 0)
      plus_no++;
    else
      zeros++;
  }

  printf("%.6f\n", (float)plus_no / n);
  printf("%.6f\n", (float)minus_no / n);
  printf("%.6f\n", (float)zeros / n);

  return 0;
}
