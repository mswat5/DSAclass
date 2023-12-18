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
    
  string x;cin>>x; //taking it as string will be easier to do than int 
  fl(i,x.length()){
  if(i==0){
    ll cnum=x[i]-'0';
    if(cnum==0){
        x[i]='9';
    }else{
        if(9-cnum<cnum && cnum!=9){//first digit zero nh ani chaiye
x[i]=((char)('0'+9-cnum));
        }
    }
  }else{
    ll cnum= x[i]-'0';
    if(9-cnum <cnum) x[i]=((char)('0'+9-cnum));
  }
  }
  cout<<x;
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
