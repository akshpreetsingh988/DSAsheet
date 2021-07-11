#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr []  ;
	int n ;
	cin >> n ;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<"\n";
	
	int start = 0 , end = n-1;
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp ;
		start ++;
		end --; 
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}
