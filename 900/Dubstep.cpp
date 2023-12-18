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
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
 
int GCD (int a, int b) { if (!a) return b; return GCD(b%a, a);}
 
int main()
{
    clock_t startTime = clock();
string s,ans; cin>>s;

ll i=0,cnt=0;
for(i=0;i<s.size();)
{
    if(i+2<s.size() && s.substr(i,3)=="WUB"){//YE LENGTH CROSS N KRE ISLIE
//I SE 3 L. KI WUB MILE
i+=3; //to wub ko jump kr jao

if(cnt){
ans+=" ";
cnt=0; //agr cnt hai mtlb ki phle koi word lgaya hai hmne to ab space bhi lga do
}      
    }
    else {//aur jo bhi mile usko ans me add. krte jao
        ans+=s[i];
i++; 
cnt++; 
        }
}
cout<<ans<<endl;

    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
