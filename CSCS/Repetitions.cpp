  #include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin>>s;
    int final=0;
    int length=1;

    for(int i=1;i<s.size();i++)
    {   
        if (s[i-1]==s[i]){
            length++; 
        }
        else{
            length=1;
        }
        final=max(length,final);
    }

   if(s.size()==1)
    {
        cout<<1;
    }
    else{
    cout<<final;
}
}
