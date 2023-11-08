//Day 5: Problem Statement - Coins and Triangle
//Topic: Binary Search
//--------------------Solution----------------------
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--) {
	    int N;
	    cin>>N;
	    int i=1;
	    while(N!=0) {
	        N -= i;
	        i++;
	        if(N<0) 
		    break;
	    }
	    (N<0) ? cout<<i-2<<endl : cout<<i-1<<endl;
	}
	
	return 0;
}
