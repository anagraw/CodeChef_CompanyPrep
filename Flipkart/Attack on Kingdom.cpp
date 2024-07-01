#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n; 
	cin>> t; 
	while(t--){
	    cin>>n; 
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i]; 
	        if(n==1){
	            cout<<arr[0]<<endl; 
	            break; 
	        }
	    }
	    sort (arr.begin(), arr.end()); 
	    cout<< arr[1]<<endl; 
	}

}
