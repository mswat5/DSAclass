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
    ll a[n];
    fl(i,n)cin>>a[i];
      ll maxi=INT32_MIN,mini=INT32_MAX; 
      if(n==1){
        cout<<a[0]<<" "<<a[0]<<endl;
        return 0;
      }
      // if(n==2){
      //   cout<<abs(a[1]-a[0])<<" "<< abs(a[1]-a[0])<<endl;
      //   cout<<abs(a[1]-a[0])<<" "<< abs(a[1]-a[0])<<endl;
      //   return 0;
      // }

      //ab agr glt aye to jyada kux nh krna hai bSS BOUND SET KRDENA ... I JB N SE BAHAR JARHA HOTA
      fl(i,n){
        maxi= max(abs(a[n-1]-a[i]),abs(a[i]-a[0]));

        if(i==0)  mini=abs(a[1]-a[0]);
        else if(i==(n-1)) mini=abs(a[n-1]-a[n-2]);
        else {
          mini=min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]));
        }

          cout<<mini<<" "<<maxi<<endl;
        }


    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
