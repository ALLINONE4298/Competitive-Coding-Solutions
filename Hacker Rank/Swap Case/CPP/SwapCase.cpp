#include <iostream>

using namespace std;

string swapCase(string s, int n){
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
    string str;
    getline(cin,str);
    cout<<swapCase(str, str.length());
    return 0;
}
