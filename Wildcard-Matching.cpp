//Day 6: Problem Statement - https://www.codechef.com/practice/course/strings-cpp/PCPPST01/problems/TWOSTR
//Topic: String
//--------------------------------Solution--------------------------------
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        string X, Y;
        cin>>X>>Y;
        int a=0;
        int size = X.size();
        
        for(int i=0; i<size; i++){
            if( (X[i]==Y[i]) || ( (X[i]=='?') || (Y[i]=='?') ) )
            {
                a++;
            }
            else
            {
            	puts("No");
            	break;
	    }     
        }
        
        if(a==size)
           puts("Yes");
           
    }
  
	return 0;
}
