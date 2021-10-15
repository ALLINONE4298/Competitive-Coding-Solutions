//Coding Section

#include <stdio.h>

int main()
{
  char S[101];
  int i;

  scanf("%s", &S);

  i = 0;
  while (S[i] != '\0')
  {
    if (S[i] >= 'a' && S[i] <= 'z')
      S[i] -= 32;
    else
      S[i] += 32;

    i++;
  }

  printf("%s", S);

  return 0;
}
