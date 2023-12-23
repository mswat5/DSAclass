
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


int exists(string a,string b)
{
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n-m+1;i++)
    {
        if(a.substr(i,m)==b){return 1;}
    }
    return 0;
}

int main()
{
  ll t,n;cin>>t;
  while(t--){
 int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int c=0;
        while(!exists(a,b))
        {
            a+=a;
            c++;
            if(a.size()>100){break;}
        }
        if(exists(a,b)){cout<<c<<"\n";}
        else{cout<<"-1\n";}
  }

    return 0;
}
