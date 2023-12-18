#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"enter the number of paragraph :";
int n;
cin>>n;
vector<vector<string> >PAR(n+1);
for(int i=0;i<=n;i++){
string str;
getline(cin,str);
PAR[i].push_back(str);
}
cout<<endl;
cout<<"print out PAR array:"<<endl;
cout<<"--------------"<<endl;
cout<<endl;
for(int i=0;i<=n;i++){
cout<<PAR[i][0]<<endl;
}
return 0;
}
