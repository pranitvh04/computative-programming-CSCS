#include <bits/stdc++.h>
using namespace std;

const int N=2*1e5;
int arr[N];

int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i+1];

	}
	long int count=0;
	for(int i=2;i<=num;i++)
	{
		long int ans =0;
		if(arr[i]<arr[i-1])
		{
			ans=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
        
		count=count+ans;
	}

	cout<<count;

}