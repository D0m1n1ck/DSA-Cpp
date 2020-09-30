#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ULL;

#define endl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
void read(int &sum){sum=0;char c=getchar( );bool f=0;while(c<'0' || c>'9') {if(c=='-') f=1;c=getchar( );}while(c>='0' && c<='9') {sum=sum*10+c-'0';c=getchar( );}if(f) sum=-sum;}
void read(ll &sum){sum=0;char c=getchar( );bool f=0;while(c<'0' || c>'9') {if(c=='-') f=1;c=getchar( );}while(c>='0' && c<='9') {sum=sum*10+c-'0';c=getchar( );}if(f) sum=-sum;}
void readarr(ll a[], ll n){for(int i=0;i<n;i++)read(a[i]);}
void readarr(int a[], int n){for(int i=0;i<n;i++)read(a[i]);}
void aout(ll a[], ll n){for(int i=0;i<n;i++)cout<<a[i]<<" ";}
void aout(int a[], int n){for(int i=0;i<n;i++)cout<<a[i]<<" ";}
const int MAXN = (int)1e6 + 7;
const int MOD = (int)1e9 + 7;
const int INF = (int)2e9 + 7;
const ll LINF = (i64)1e18;
const ld PI = 3.1415926535897932384626433832795; 

int subArraySum(int arr[], int n, int sum) 
{ 
    int curr_sum, i, j; 
  
    for (i = 0; i < n; i++) { 
        curr_sum = arr[i]; 
  
        for (j = i + 1; j <= n; j++) { 
            if (curr_sum == sum) { 
                cout << "Sum found between indexes "
                     << i << " and " << j - 1; 
                return 1; 
            } 
            if (curr_sum > sum || j == n) 
                break; 
            curr_sum = curr_sum + arr[j]; 
        } 
    } 
  
    cout << "No subarray found"; 
    return 0; 
} 
  
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    return 0; 
} 