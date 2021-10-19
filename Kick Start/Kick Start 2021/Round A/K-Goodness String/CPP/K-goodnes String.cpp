#include <iostream>

using namespace std;

int ops_required(){
    int c=0,N,K;
    cin >> N >> K;
    string S;
    cin >> S;

    for(int i=0; i<N/2; i++){
        if(S[i]!=S[N-i-1])
        c++;
    }
    return std::abs(K-c);
}

int main(){
    int T;
    cin >> T;
    while(T>0){
      cout << "Cases #" << T << ": " << ops_required();
      T--;
    }
    return 0;
}