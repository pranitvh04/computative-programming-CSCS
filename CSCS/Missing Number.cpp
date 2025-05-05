#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int arr[N];

int main(){
 	int num;
 	cin>>num;
 	for(int i=0;i<num;i++)
 	{
 		int num1;
 		cin >> num1;
 		arr[num1]++;
 	}

 	for(int i=1;i<=num;i++)
 	{
 		if(arr[i]==0)
 		{
 			cout<<i;
        }
 	}

 }



