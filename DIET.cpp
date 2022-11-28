#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int j=0;j<t;j++){
	    int n,k;
	    cin>>n>>k;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int x=0,y=0;
	    int e=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=k){
	            y=1;
	            x=x+arr[i]-k;
	        }
	        else{
	            if(x+arr[i]>=k){
	                y=1;
	                x=x+arr[i]-k;
	            }
	            else{
	                y=0;
	                e=i;
	                break;
	            }
	        }
	    }
	    if(y==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO "<<e+1<<endl;
	    }
	}
	return 0;
}
