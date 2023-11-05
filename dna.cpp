//Day 2: Problem Statement - DNA Storage
//Topic: String
//----------------------------------------------------Solution----------------------------------------------------
#include <iostream>
using namespace std;

//converts binary to string
void btosfun(int i) {
		while(i--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		string ans = " ";
		
		int i=0;
		while(i<n){
			if((s[i]=='0') && (s[i+1]=='0')) {
				 ans += "A";
			}
			else if((s[i]=='0') && (s[i+1]=='1')) {
				 ans += "T";
			}
			else if((s[i]=='1') && (s[i+1]=='0')) {
				ans += "C";
			}
			else if((s[i]=='1') && (s[i+1]=='1')) {
				ans += "G";
			}
			i=i+2;
		}
		cout<<ans<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	btosfun(t);
	return 0;
}


