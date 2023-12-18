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
#define fl(i,n) for(int i=0;i<n;i++)
#define fl1(i,n) for(int i=1;i<=n;i++)
#define tr(container, it)for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define MP make_pair
#define PB push_back
#define vll vector<ll>
 
int GCD (int a, int b) { if (!a) return b; return GCD(b%a, a);}
 
 
 
int main()
{
    clock_t startTime = clock();
    
  ll n;cin>>n;
  ll a[n]; ll b[105];
  fl1(i,n){
    cin>>a[i];
    b[a[i]]=i;
  }
  fl1(i,n){
    cout<<b[i]<<" ";
  }
  //ek alg arr bnake usme ith Pith ke accn dalenge mtlb isme jese i index pe jo val hai usme val ko index bnayenge index ko val....basically kind of hashing
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
