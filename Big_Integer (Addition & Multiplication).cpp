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

class BigInteger
{
	private:
		
		ll i,j,k;
		
	public:
	
		void treat(string &a, string &b)
		{
			int n = a.length();
			int m = b.length();
			int diff = abs(n-m);
			
			if(n > m)
			{
				reverse(All(b));
				fr(k,diff)
					b += '0';		
				reverse(All(b));

			}
			else if(m > n)
			{
				reverse(All(a));
				fr(k,diff)
					a += '0';
				reverse(All(a));
			}
		}

		string add(string a, string b)
		{
			treat(a,b);
			assert(a.length() == b.length());

			int n = a.length();
			int carry = 0;
			
			string ans;
			ans.resize(n);
			
			reverse(All(a));
			reverse(All(b));
			
			fr(k,n)
			{
				ans[k] = char('0'+(a[k]-'0'+b[k]-'0'+carry)%10);
				carry = (a[k]-'0'+b[k]-'0'+carry)/10;
			}
			
			if(carry > 0)
				ans += char(carry+'0');
			
			reverse(All(ans));
			return ans;
		}

		string multiply(string a, string b)
		{
			string c;
			int n = a.length();
			int m = b.length();
			if(m > n)
			{
				c = b;
				b = a;
				a = c;
			}
			n = a.length();
			m = b.length();
			string ans;
			ans.resize(n,'0');
			int carry = 0;
			
			reverse(All(a));
			reverse(All(b));
			
			fr(i,m)
			{
				carry = 0;
				string res;
				res.resize(n);
				
				fr(j,n)
				{
					res[j] = char('0'+((a[j]-'0')*(b[i]-'0')+carry)%10);
					carry = ((a[j]-'0')*(b[i]-'0')+carry)/10;
				}
				
				if(carry > 0)
					res += char(carry+'0');
				
				reverse(All(res));

				fr(j,i)
					res += '0';

				ans = add(ans,res);
			}
			return ans; 
		}
};

void solve()
{
	cout << "Just enter two numbers as large as you want and it will automatically display their sum and product.\n\n";
	string n1,n2;
	cout << "Enter First no. : ";
	cin >> n1;
	cout << "Enter Second no. : ";
	cin >> n2;
	cout << N;
	
	BigInteger object;
	
	cout << "Sum of given no.s is = " << object.add(n1,n2) << N;
	cout << "Product of given no.s is = " << object.multiply(n1,n2) << N;
}

int main()
{
	solve();
    return 0;
}
 
