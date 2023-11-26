Problem Statement - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/SMOL?tab=Submissions
---------------------Solution---------------------
#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        
        if(k!=0)
           cout<<n%k<<endl;
        else 
		   cout<<n<<endl;
    }
	return 0;
}
