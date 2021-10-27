#include <iostream>
#include <iomanip>
using namespace std;

void balanceLeft(float* bal, int wa){
    if((*bal >= (wa+0.5)) && (wa % 5 == 0) && (wa > 0)&& (wa <= 2000))
        *bal -= (wa + 0.50);
    cout<<fixed<<setprecision(2)<<*bal<<endl;
}

int main() {
	float balance=0;
	int withdrawAmount=0;
	cin>>withdrawAmount>>balance;
	balanceLeft(&balance,withdrawAmount);
	return 0;
}
