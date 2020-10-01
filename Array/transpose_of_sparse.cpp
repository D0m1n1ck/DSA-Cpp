#include<bits/stdc++.h>
using namespace std;

	int  a,b;
	int n;
	long long sparse[1000][3];
	int flag=0;
	void display(){
		for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=0;k<n;k++){
				if(sparse[k][0]==i&&sparse[k][1]==j){
					cout<<sparse[k][2]<<" ";
					flag=1;
					break;
				}
				
			}
			if(flag==0)
			cout<<0<<" ";
			
			flag=0;	
		}
		cout<<endl;
	}
}
int main(){
	cout<<"Enter dimension of matrix : ";

	cin>>a>>b;
	
	cout<<"Enter number of non zero elements : ";

	cin>>n;

	cout<<"Enter row number column number and element value : "<<endl;
	for(int i=0;i<n;i++){
		int row,col,val;
		cin>>row>>col>>val;
		sparse[i][0]=row;
		sparse[i][1]=col;
		sparse[i][2]=val;
	}
	
	cout<<"The entered matrix is : "<<endl;
	display();
	
	//transpose
	
	for(int i=0;i<n;i++){
		int temp=sparse[i][0];
		sparse[i][0]=sparse[i][1];
		sparse[i][1]=temp;
	}
	
	cout<<"Transpose of the given matrix is : "<<endl;
	display();
	
}
