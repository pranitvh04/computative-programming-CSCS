 #include <bits/stdc++.h>
using namespace std;

int main() {

 int n,x;
 cin>>n>>x;

 vector<pair<int,int>> v;
 for(int i=0;i<n;i++)
 {
   int a;
   cin>>a;
   v.push_back({a,i+1});
 }

 sort(v.begin(),v.end());

int b=0;
int e=n-1;
long long sum =0;
bool val=1;
while(b<e)
{
   sum=v[b].first + v[e].first;
   if(sum==x)
   {
      cout<<v[b].second<<" "<<v[e].second;
      val=0;
      break;
   }
   else if(sum<x)
   {
      b++;
   }
   else
   {
     e--;
   }
}

if(val)
{
   cout<<"IMPOSSIBLE";
}
   
}