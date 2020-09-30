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
const ll inf = ((int)1e9+3);
const int M97 = ((int)1e9+7);
using namespace std;

typedef vector<int> Vi;
typedef pair<int,int> Pii;
ll i,j,k;

void solve()
{
	int n,m;                                		// Enter no. of vertices and no. of edges
	cin >> n >> m;

	ll dp[n+1][n+1][2];

	fr(i,n+1)
		fr(j,n+1)
			dp[i][j][1] = dp[i][j][0] = inf;
	
	int a,b,c;
	
	fr(i,n+1)
		dp[i][i][0] = 0;
	fr(i,m)
	{
		cin >> a >> b >> c;				// Enter edges in the form a to b with weight c
		dp[a][b][0] = min(dp[a][b][0],(ll)c);
	}	
			
	rng(k,1,n+1)
	{
		rng(i,1,n+1)
			rng(j,1,n+1)
				dp[i][j][1] = min(dp[i][j][0], dp[i][k][0] + dp[k][j][0]);
		rng(i,1,n+1)
			rng(j,1,n+1)
				dp[i][j][0] = dp[i][j][1];
		
	}
	
	rng(i,1,n+1)
		if(dp[i][i][0] < 0)
			break;
			
	if(i != n+1)
	{
		cout << "Negative cycle found. Can't compute shortest paths.\n";
		return;
	}
	
	cout << "All pairs shortest paths are as follows : " << N;
	rng(i,1,n+1)
		rng(j,i+1,n+1)
		{
			cout << i << " to " << j << " : " ; 
			dp[i][j][0]<(ll)1e8 ? cout << dp[i][j][0] : cout << "No path" ;
			cout << N;
		}	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	solve();
    
    return 0;
}
