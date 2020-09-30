// Program to determine if a number is sum of distinct 4th power
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll num[5134243]={0};
void isSum(ll n){
	if(num[n])
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
int main() {
	num[0]=1;
	for(ll i = 1;pow(i,4) <= 5134242 ; i++){
		ll p = pow(i,4);
		for(ll j = 5134241; j >= p ; j--){
			if(num[j-p]==1){
				num[j]=1;
			}
		}
	}
	isSum(1);     // 1^4 = 1
	isSum(17);	  // 1^4 + 2^4 = 17
	isSum(32);	  
	isSum(81);    // 3^4 = 81
	isSum(40);
	isSum(98);    //1^4 + 2^4 + 3^4 = 98
}