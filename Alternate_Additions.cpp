//Day 4: Problem Statement - Alternate Additions
//Topic: Maths
//-----------------------Solution-----------------------
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--) {
	    int A, B;
	    cin>>A>>B;
	    int i=1;
	    while(A<B) {
	       if(i%2==0)
	           A += 2;
	       else
	           A += 1;
   
	        i++;
	    }
	    (A == B) ? cout<<"YES"<<endl : cout<<"NO"<<endl ;
	}
	
	return 0;
}
