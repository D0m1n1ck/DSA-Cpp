#include <bits/stdc++.h>
#define ll long long int
#define fr(i,n) for(i=0;i<n;i++)
#define rng(i,a,b) for(i=a;i<b;i++)
#define T long long int T;cin>>T;while(T--)
#define ain(a,n) for(int zzz=0;zzz<n;zzz++){cin>>a[zzz];}
#define aout(a,n) for(int zzz=0;zzz<n;zzz++){cout<<a[zzz]<<" ";}cout<<"\n";
#define All(v) v.begin(),v.end()
#define dbg(v) cerr<<">-- "<<#v<<" = "<<v<<"\n";
#define PB push_back
#define MP make_pair
#define N "\n"
const ll inf = ((int)1e18+3);
const int M97 = ((int)1e9+7);
using namespace std;

typedef vector<ll> Vi;
typedef pair<int,int> Pii;
ll i,j,k;

void knapsack()
{
	int wt,n;
	cin >> wt >> n;
	
	int weight[n+1], value[n+1];

	rng(i,1,(n+1))
		cin >> value[i] >> weight[i];
		
	vector<ll> dp(wt+1);
	
	rng(i,1,(n+1))
	{
		for(j = wt;j >= 1;j--)
		{
			if(weight[i] <= j)	
				dp[j] = max(dp[j], value[i] + dp[j-weight[i]]);
			else break;
		}
	}
	
	cout<<dp[wt]<<N;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	  knapsack();
	
    return 0;
}
