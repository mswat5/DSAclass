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
#define tr(container, it)for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define MP make_pair
#define PB push_back
#define vll vector<ll>
 
int GCD (int a, int b) { if (!a) return b; return GCD(b%a, a);}
 
 
 
int main()
{
    clock_t startTime = clock();
    
  ll n,k;cin >>n>> k;
 fl(i,n){
   cout<<char('a'+ i%k);
 }
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
