#include<iostream>
using namespace std;

struct Pair {
	int min ;
	int max ;
	 
};

struct Pair GetMinMax (int arr[], int low, int high)
{
	struct Pair minmax , mml , mmr ;
	int mid ;
	
	if(low == high)
	{
		minmax.max = arr[low];
		minmax.min = arr[low];
		return minmax;
	}
	
	if(low == high-1)
	{
		if(arr[low] < arr[high])
		{
			minmax. max = arr[high];
			minmax. min = arr[low];
 		}
 		else 
 		{
 			minmax.max = arr[low];
			 minmax.min = arr[high];	
		}
		return minmax;
	}
	
	mid = (low+high)/2;
	mml = GetMinMax (arr, low, mid);
	mmr = GetMinMax (arr, mid+1, high);
	
	if(mml.min < mmr.min)
	{
		minmax.min = mml.min;
	}
	else
	{
		minmax.min = mmr.min;
	}
	
	if(mml.max > mmr.max)
	{
		minmax.max = mml.max;
	}
	else 
	{
		minmax.max = mmr.max;
	}
	return minmax;
}
int main()
{
	int arr[] = {1000, 11, 445 , 1 , 330, 3000};
	int size = 6;
	struct Pair minmax = GetMinMax(arr , 0 , size-1);
	
	cout<<"Min element = "<<minmax.min<<endl;
	cout<<"Max element = "<<minmax.max<<endl;
}
