//Program to implement stack data structure
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	stack<char> stk;
	string s;
	cin>>s;
	int f=0;
	int i;
	for( i=0;i<s.length();i++){
		if(s[i]=='('||s[i]=='['||s[i]=='{')
		stk.push(s[i]);
		else{
			if(s[i]!='}'&&s[i]!=']'&&s[i]!=')')
			continue;
			
			
			if(stk.empty())
			{cout<<i+1<<endl;
				f=1;
				
				//cout<<" B";
				break;
			}
			
			char top= stk.top();
			stk.pop();
			
			if(top=='('&&s[i]!=')'||top=='['&&s[i]!=']'||top=='{'&&s[i]!='}')
			{
				cout<<i+1<<endl;
				f=1;
				
				//cout<<" c";
				break;
			}
		}
	
	}
	
		if(!stk.empty()&&f==0)
			{
	//			cout<<" A";
	cout<<i;
	exit(0);
	 return 0;
			}
		
	
	if(f==0)
	cout<<"Success";
	
}
