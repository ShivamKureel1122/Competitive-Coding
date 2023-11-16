//Problem Statement - https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/ALTER?tab=statement
//-----------------------Solution-----------------------
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--) {
        int A, B, P, Q;
        cin>>A>>B>>P>>Q;
        int countOfA = P/A;
        int countOfB = Q/B;
        
        if(abs(countOfA - countOfB) <= 1  &&  P%A==0  &&  Q%B==0)
          cout<<"YES"<<"\n";
        else
          cout<<"NO"<<"\n";
    }
    return 0;
} 
