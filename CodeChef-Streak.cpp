//Day 7: Problem Statement - https://www.codechef.com/practice/course/arrays-cpp/PCPPAR01/problems/CS2023_STK?tab=statement
//Topic: Array
//-------------------------Solution-------------------------
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;  cin>>T;
	while(T--) {
	    int N;  cin>>N;
	    vector <int>  Om(N), Addy(N);
	    int OmCount = 0, AddyCount = 0;
	    int maxAddy = 0, maxOm = 0;
	    
	    for(int i=0; i<N; i++)  cin>>Om[i];
	    for(int i=0; i<N; i++)  cin>>Addy[i];
	    
	    for(int i=0; i<N; i++){
	        if(Om[i] > 0){
	        	OmCount++;
	        	if(maxOm<OmCount) maxOm=OmCount;
		 } 
	        else OmCount=0;
	    }
	    for(int i=0; i<N; i++){
	        if(Addy[i] > 0){
	        	AddyCount++;
	        	if(maxAddy<AddyCount) maxAddy=AddyCount;
		 } 
	        else AddyCount=0;
	    }
	    
	    if(maxAddy > maxOm)  cout<<"Addy"<<endl;
	    else if(maxOm > maxAddy)  cout<<"Om"<<endl;
	    else cout<<"Draw"<<endl;
	}
	return 0;
}
