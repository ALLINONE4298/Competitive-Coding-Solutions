// Toggle String
// You have been given a String S consisting of uppercase and lowercase English alphabets.You need to change the case of each alphabet in this String.
// That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase.
// You need to then print the resultant String to output.

//Input Format
//The first string and only line of input contains the string S

//Output Format
//Print the resultant string on a single line.

// Constraints
// 1 <= |S| <= 100 where S denotes the length of String S.

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
