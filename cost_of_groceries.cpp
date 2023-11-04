//Array
//Cost of Groceries

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n, x;
        int sum = 0;
        cin>>n>>x;
        int a[n], b[n];
        
        for(int i=0; i<n; i++)
          cin>>a[i];
        
        for(int i=0; i<n; i++)
          cin>>b[i];
           
        for(int i=0; i<n; i++){
            if(a[i] >= x)
              sum = sum + b[i];
        }
        
        cout<<sum<<"\n";
    }
    
    return 0;
}
