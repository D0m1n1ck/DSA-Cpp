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
const int inf = ((int)1e9+3);
const int M97 = ((int)1e9+7);
using namespace std;

typedef vector<int> Vi;
typedef pair<int,int> Pii;
ll i,j,k;

void solve()
{
	int n, x;
	cin >> n;
	set<int> l,r;
	l.insert(0);
	r.insert(inf);
	
	fr(i,n)
	{
		cin>>x;
		auto it = l.end();
		it--;
		int a = *it;
		int b = *r.begin();
		if(x < a)
			l.insert(x);
		else if(x > b)
			r.insert(x);
		else
			r.insert(x);
		
		while(l.size() > r.size())
		{
			it = l.end();
			it--;
			int z = *it;
			l.erase(it);
			r.insert(z);
		}
		
		while(r.size() > l.size())
		{
			it = r.begin();
			int z = *it;
			r.erase(it);
			l.insert(z);
		}
		int s = (l.size() + r.size() - 1)/2;
		
		if(s <= (int)l.size())
		{
			it = l.end();
			it--;
			int z = s-l.size()+1;
			advance(it,z);
			cout << *it << ' ';
		}
		
		else
		{
			it = r.begin();
			int z = s - l.size() ;
			advance(it,z);
			cout << *it << ' ';
		}
	}
	cout << N;
}

int main()
{
    //~ios_base::sync_with_stdio(false);
    //~cin.tie(NULL);
    
	solve();

    return 0;
}
