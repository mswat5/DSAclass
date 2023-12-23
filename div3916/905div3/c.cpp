
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <ctime>
//#include <bit/stdc++.h>
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
#define el '\n'

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
  ll n,k; cin>>n>>k;
  ll f=1;
  ll rem=INT_MIN, mrem=INT_MIN;
    vll a(n); 
    fl(i,n) cin>>a[i];
ll ans=1e15;
    fl(i,n){
        ll cur=k - a[i] % k;
        if(a[i]%k==0)cur=0;//we just want atleast 1 element divisible by k, if we found that then no oprtns needed
        ans=min(ans,cur);
    }

//as k is only [2,5]
    if(k==4){//as isse divisible wale 2 se to honge hi so uske lie check krna would be grt
        ll cnt=0;
        fl(i,n){
            if(a[i]%2==0)cnt++;
        }//agr do se jyada even milgye hme then product 4 se hojayega 
        if(cnt>1)ans=0;
        else ans=min(ans,2-cnt);
    }

  cout<<ans<<el;
  }

  
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
