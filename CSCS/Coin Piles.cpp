 #include<bits/stdc++.h>
using namespace std;

string coin(int a,int b)
{
    int min_value = min(a, b); 
    int max_value = max(a, b);

    if((a+b)%3 == 0 && max_value<=2*min_value)
    {
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    int test;
    cin>>test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;
        string out = coin(a,b);
        cout<<out<<endl;
    }
}
