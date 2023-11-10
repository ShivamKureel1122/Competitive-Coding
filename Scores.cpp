//Day 7: Problem Statement - https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/BLOBBYVOLLEY
//Topic: String
//------------------------Solution------------------------
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int N;  cin>>N;
	    string str;  cin>>str;
	    int Alice=0, Bob=0;
	    
	    for(int i=0; i<N; i++) {
	        if( (str[i] == 'A') && (str[i-1] != 'B') )  
          { Alice += 1; }
	        else if( (str[i] == 'B') && (str[i+1]=='B') )  
          { Bob += 1; }
	    }
	    
	    cout<<Alice<<" "<<Bob<<endl;
	}
	return 0;
}

