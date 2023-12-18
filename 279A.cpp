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
    
  ll t;cin >> t;
  vll ar(t);
  vll a,b,c;
  fl(i,t){
    cin>>ar[i];
    if(ar[i]==1){//main scene yaha dikkat ka tha ki index keses krni hai print wo chiz tm yaha kr rhe ki jese 1 mila to uski index 1 wali arr me daldi ...bsb fir jitni team ho skti thi to utne tk hi hm ye new wali arrays access krenge  
      a.PB(i);
   }
   else if(ar[i]==2){
      b.PB(i);
   }else c.PB(i);
  }
ll w=min(a.size(),min(b.size(),c.size()));//min size jitni hi team bnpayehi iynk
cout<<w<<endl;
fl(i,w){
   cout<<a[i]+1<<' '<<b[i]+1<<' '<<c[i]+1<<endl;
}
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
