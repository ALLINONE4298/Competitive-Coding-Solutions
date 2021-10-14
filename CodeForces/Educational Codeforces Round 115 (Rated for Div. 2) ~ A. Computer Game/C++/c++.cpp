#include <bits/stdc++.h>

using namespace std;

vector<string>vec;
int x;
void init(){
    vec.clear();
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
            bool cur= false;
        init();
        cin>>x;
        for(int i=0;i<2;i++){
            string tmp;
            cin>>tmp;
            vec.push_back(tmp);
        }
        for(int i=0;i<x;i++){
                if(vec[0][i]=='1')
                {
                    if(vec[1][i]=='1')
                    {
                        cout << "NO" << endl;
    cur=true;
                        break;
                    }
                }
        }
        if(!cur)
        cout << "YES" << endl;
    }
}
