#include<bits/stdc++.h>
using namespace std;

long long int solve( long long int a[],long long int size,long long int key){
	sort(a,a+size);
	long long int  count=0;
	for(int i=size-1;i>=0;i--){
		if(a[i]>=key){
			count++;
			continue;
		}
		else{
			break;
		}
	}
	return size-count;
}

int main(){
	long long int n ;
	cout<<"Enter size of the array : ";
	cin>>n;
	long long int a[n];
	cout<<"Enter "<<n<<" elements \n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	cout<<"Enter number you want to compare : ";
	int key;
	cin>>key;
	int ans = solve(a,n,key);
	cout<<ans;
	
	
}

