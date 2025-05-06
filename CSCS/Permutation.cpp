 #include <bits/stdc++.h>
using namespace std;

int main(){


	int num;
	cin>>num;
	vector<int> arr_odd;
	vector<int> arr_even;

	if (num>4)
	{
	 for(int i=1;i<=num;i++)
	{
	 if (i%2==0)
	 {
	 	arr_even.push_back(i);
	 }
	 else
	 {
	 	arr_odd.push_back(i);vector<int> arr_odd;
	vector<int> arr_even;
	 }
}
	}
	else if(num==1)
	{ cout<<1;}

   else if(num==4)
   {
   	cout<<"2 4 1 3 " ;
   }
	else

	{
		cout<<"NO SOLUTION";
	}

   for(int i=0;i<arr_even.size();i++)
   {
   	arr_odd.push_back(arr_even[i]);
   }

   
   for(int i=0;i<arr_odd.size();i++)
   {
   	cout<<arr_odd[i]<<" ";
   }


}