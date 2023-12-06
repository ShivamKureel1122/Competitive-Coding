Problem: https://www.codechef.com/START93D/problems/SEVENRINGS?tab=statement
=====================================================
#include <iostream>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        int bill = n*x;
        if(bill >= 10000 && bill <= 99999){
            int firstDigit = bill/10000;
            if(firstDigit != 0)  cout<<"YES"<<endl;
        } 
        else cout<<"NO"<<endl;
    }
	return 0;
}
