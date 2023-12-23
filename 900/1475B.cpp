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

  ll t,n;cin>>t;
  while(t--){
  cin>>n;
 ll rem= n%2020; //take it on examples to understand it more
 if(rem<=n/2020){
    py
 }else pn
// i then did on copy 
//jese ki 2020 se divide krke x quotient aya and jitna rem aya so 2020 se x-rem time divide hoga and 2021 se rem times
//aisa hm baki consecutive no's k lie bhi kr skte
  }
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
