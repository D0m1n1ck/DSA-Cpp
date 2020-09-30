//Given n line segments determine if k of them overlap
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n = 3,k = 2;
	ll seg[n][2] = {{1, 4},
					{2, 5},
					{3, 6}};
	map<ll,ll>start,end;
	for(int i=0;i<n;i++){
		ll x = seg[i][0], y = seg[i][1];
		start[x]++;
		end[y]++;
	}
	ll ready=0;
	map<ll,ll>pre;
	ll sum=0;
	for(auto it : end){
		pre[it.first] = sum;
		sum+=it.second;
	}
	bool ok = false;
	for(auto it : start){
		auto itr = pre.lower_bound(it.first); 
		ll running = it.second + ready - (*itr).second;
		if(running>=k){
			ok = true;
			break;
		}
		ready+=it.second;
	}
	(ok ? cout<<"YES\n" : cout<<"NO\n");

}