//Coding Section

#include <stdio.h>

int main()
{
  char str[21];
  int i = 0, no_of_z = 0, no_of_o = 0;

  scanf("%s", &str);

  while (str[i] != '\0')
  {
    if (str[i] == 'z')
      no_of_z++;
    else
      no_of_o++;
    i++;
  }

  if (no_of_o == (2 * no_of_z))
    printf("Yes");
  else
    printf("No");

  return 0;
}
