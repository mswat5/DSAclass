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
    
  ll t; cin>>t;
  while(t--){
string s;cin>>s;
ll n=s.length();
//     fl(i,s.length()){
//         if(s[i]=='B'){
//             for(int j=i-1;j>=0;j--){
//                 if(s[j]>='A' && s[j]<='Z'){
//                     s[j]='1';
//                     break;
//                 }
//             }
//             s[i]='1';
//         }
//     }
//   fl(i,s.length()){ 
//      if(s[i]=='b'){
//             for(int j=i-1;j>=0;j--){
//                 if(s[j]>='a' && s[j]<='z'){
//                     s[j]='1';
//                     break;
//                 }
//             }
//             s[i]='1';
//         }
//   }
ll bcnt=0,Bcnt=0;
for(ll i=n-1;i>=0;i--){
    //b and B ka cnt so jese hi Upper ya lower mile agr b's ka cnt >0 hoga to replace krdenge d b's cnt ko -- bhi ...and har b's ko to krenge hi
    if(s[i]=='b'){
        bcnt++;
        s[i]='1';
    } else if(s[i]=='B'){
        Bcnt++;
        s[i]='1';
    } else if(s[i]>='a' && s[i]<='z' && s[i]!='b' && bcnt>0){
        
            s[i]='1';
            bcnt--;
        
    }else if(s[i]>='A' && s[i]<='Z' && s[i]!='B' && Bcnt>0){
        
            s[i]='1';
            Bcnt--;
        
    }

}



string ans="";
fl(i,s.length()){
    if(s[i]!='1'){
        ans+=s[i];
    }
}
cout<<ans<<endl;

  }
  
    clock_t endTime = clock();
    cerr << "\nTime: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
