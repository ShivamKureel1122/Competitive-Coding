//Problem Statement - https://www.codechef.com/problems/COUPON2?tab=submissions
//-----------------------------Solution-----------------------------
#include <iostream>
using namespace std;

int main() {
	int t;  cin>>t;
	while(t--) {
	    int delivery_charge, coupon_cost;
	    cin>>delivery_charge>>coupon_cost;
	    int A, total_cost1=0;
	    for(int i=0; i<3; i++){
	        cin>>A;
	        total_cost1 += A;
	    }
	    
	    int B, total_cost2=0;
	    for(int i=0; i<3; i++){
	        cin>>B;
	        total_cost2 += B;
	    }
	    
	    if((total_cost1 >= 150) && (total_cost2 >= 150)){
	        if((total_cost2+total_cost1+coupon_cost) < (total_cost1+total_cost2+(2*delivery_charge)))
	        {
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    
	    else if((total_cost1 >= 150) && (total_cost2 < 150)){
	        if((total_cost1+coupon_cost+total_cost2+delivery_charge) < (total_cost1+total_cost2+(2*delivery_charge)))
	        {
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    
	    else if((total_cost2 >= 150) && (total_cost1 < 150)){
	        if((total_cost2+coupon_cost+total_cost1+delivery_charge) < (total_cost1+total_cost2+(2*delivery_charge)))
	        {
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    
	    else cout<<"NO"<<endl; 
	    
	}
	return 0;
}
