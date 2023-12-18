#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <ctime>
using namespace std;

typedef long long ll;
#define fl(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 1; i <= n; i++)
#define tr(container, it) for (typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define MP make_pair
#define PB push_back
#define vll vector<ll>
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int GCD(int a, int b)
{
    if (!a)
        return b;
    return GCD(b % a, a);
}

int main()
{
    clock_t startTime = clock();

  ll t;cin>>t;
  while(t--){
   ll n,ans=0; cin>>n;
   
   vll a(n); for(ll i=1;i<=n;i++) cin>>a[i];
   sort(a.begin(), a.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });
   for(ll i=1;i<=n;i++){
     for(ll j=i+1;j<=n;j++){
    if(__gcd(a[i],2*a[j])>1){
ans++;
    }
   
   }
  }
  cout<<ans<<endl;
  }
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
