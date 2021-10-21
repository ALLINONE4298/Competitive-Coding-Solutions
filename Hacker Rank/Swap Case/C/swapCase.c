#include <stdio.h>
#include <string.h>

char *swapCase(char s[], int n){
    for(int i=0; i<n; i++){
        // for upper case alphabets (A = 65)
        if((s[i] <= 90)  && (s[i] >= 65))
            s[i] += 32;
        // for lower case alphabets (a = 97)   
        else if((s[i] <= 122)  && (s[i] >= 97))    
            s[i] -= 32;
    }
    return s;
}

int main()
{
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    printf("%s",swapCase(str,len));
    return 0;
}
