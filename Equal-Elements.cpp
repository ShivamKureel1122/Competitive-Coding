//Day 8: Problem Statement - https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/EQUALELE
//Topic: Mix (Array, String, Sorting)  { Time limit Exceeded }
//-----------------------Solution-----------------------
#include <iostream>
using namespace std;

int fun(int *a, int n)
{
    int count=1, Max=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]==a[j]) count++; 
		}
		Max = max(count, Max);
		count=1;
	}	
	return n-Max;
}

int main() {
	int T; cin>>T;
	while(T--) {
	    int size;  cin>>size;
	    int A[size];	 
	    for(int i=0; i<size; i++)  cin>>A[i];
		  int ans = fun(A, size);
		  cout << ans << "\n" ;
	}
	return 0;
} 
