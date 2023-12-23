
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
#define mcl  map<char, ll> mp;
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define F first
#define S second

int GCD(int a, int b)
{
    if (!a)
        return b;
    return GCD(b % a, a);
}

int main()
{
    clock_t startTime = clock();

  ll t,cnt=0;cin>>t;
 
  while(t--){
    ll n,k; cin>>n>>k;
  string s;cin>>s;
//    vll freqa(26);
//    fl(i,n){
// freqa[s[i]-'a']++;
//    }
//    ll elements=0;
//    fl(i,26){
//     if(freqa[i]>0){
//         elements++;
//     }
//     if(freqa[i]%2==0){
//         cnt++;
//     }
//    }
//    ll compare=elements - 1 - k;
//    if(compare==cnt)py
//    else pn










mcl mp;//freq arr using maps
for(auto c:s){
    mp[c]++;
}
ll need =0;
for(auto it:mp){//we are here finding extras jo pal bnane me dikkat de skte
    need+= it.S %2;
}
    if((n-k)%2) need--;//here are we checking ki remove ke baad jese odd no's bche to fir need-1 kr rhe coz fir wo ek occ wala jo hoga usse hme dikkat nh which we already counted above


//below we'r checking ki jitne hm hata skte hai ky wo hmari jrurt se jyada ya barabar hai
if(need<=k )py
 else pn
  }

  













    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
