
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
    ll n; cin>>n;
    vll a(2*n);
    fl(i,2*n)cin>>a[i];
    sort(a.begin(),a.end());
    ll i=0,j=2*n -1;
    vector< pair<ll,ll> > p;
    while(j>i){
        p.PB(MP(a[i],a[j]));
        j--; i++;
    }
    ll dist=0;
    for (int i = 1; i < p.size(); i++){
        dist+= abs(p[i].first - p[i-1].first)+abs(p[i].second - p[i-1].second);
    }
    cout<<dist<<el;
    fl(i,p.size()){
        cout<<p[i].first<<" "<<p[i].second<<el;
    }
}
  
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
