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

int smallestSumSubarr(int arr[], int n) 
{ 
    int min_ending_here = INT_MAX; 
      
    int min_so_far = INT_MAX; 
      
    for (int i=0; i<n; i++) 
    { 

        if (min_ending_here > 0) 
            min_ending_here = arr[i]; 
          
        else
            min_ending_here += arr[i]; 
          
        min_so_far = min(min_so_far, min_ending_here);             
    } 
      
    return min_so_far; 
} 
  
  
int main() 
{ 
    int arr[] = {3, -4, 2, -3, -1, 7, -5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Smallest sum: "
         << smallestSumSubarr(arr, n); 
    return 0;      
}  
