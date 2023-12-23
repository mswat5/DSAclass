
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
 //for our betterness hm 0 ko 10 bhi le skte hai coz circular nh hai isliie np
 vll a(4);
 fl(i,4){//pincode lete time 0 ko 10 krne ke lie
    char ch;cin>>ch;
    ll c=ch-'0';
    if(c==0){
        a[i]=10;
    }else a[i]=c;
 }


ll ans=4;
ll prev=1;//ye digits check ke lie 
fl(i,4){
ans+=abs(a[i]-prev);
prev=a[i];
}
cout<<ans<<el;
  }

  
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
