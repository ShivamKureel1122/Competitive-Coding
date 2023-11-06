//Day 3: Problem Statement - Passing Marks
//Topic: Sorting
//-------------------------------Solution-------------------------------
#include <iostream>
using namespace std;

void marks(int size, int index) {
    int stu_marks[size];
	int i, j, temp;
	
	    for(i=0; i<size; i++){
		   cin>>stu_marks[i];
	    }
	    for(i=0; i<size; i++) {
		   for(j=i+1; j<size; j++) {
			  if(stu_marks[i]>stu_marks[j]) {
			     temp = stu_marks[i];
			     stu_marks[i] = stu_marks[j];
			     stu_marks[j] = temp;
		        }
		   }
	   }
	
	   cout << (stu_marks[size - index] - 1) << endl;
}

int main() {
	int T, N, X;
	cin>>T;
	for(int i=0; i<T; i++) {
	    cin>>N>>X;
	    marks(N, X);  //function call
	}
	return 0;
}
