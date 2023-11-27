Problem - https://www.codechef.com/problems/LONGSEQ?tab=statement
---------------------Solution---------------------
#include <iostream>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--) {
        string digit; cin>>digit;
        int x=0, y=0;
        int length = digit.size();
        for(int i=0; i<length; i++){
            if(digit[i] == '1')  x++;
            else  y++;
        }
        if(x==1 || y==1)  cout<<"Yes"<<endl;
        else  cout<<"No"<<endl;
    }
	return 0;
}
