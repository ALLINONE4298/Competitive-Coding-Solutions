// Zoos
// You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively.
// The input word is considered similar to word zoo if 2 X x = y.

// Determine if the entered word is similar to word zoo.

// For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

// Input format
//First line : A word that starts with several Zs and continues by several Os.
//Note : The maximum length of this word must be 20.

//Output format
//Print Yes if the input word can be considered as the string zoo otherwise, print No.

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
