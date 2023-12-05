Problem : https://www.codechef.com/practice/course/number-theory/INTNT01/problems/APPLEORANGE?tab=statement
====================================================
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--) {
        int apples, oranges;
        cin>>apples>>oranges;
        int ans = __gcd(apples, oranges);
        cout<<ans<<endl;
    }
	return 0;
}
