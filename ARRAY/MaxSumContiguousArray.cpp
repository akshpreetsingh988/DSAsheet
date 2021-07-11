#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n; cin >> n ;
    for(int i=0,x; i<n; i++)
    {
        cin >> x ; 
        arr.push_back(x);
    }


    int currSum = 0 , maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        currSum += arr[i];
        if(currSum > maxSum)
        {
            maxSum = currSum;
        }
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    cout<<maxSum;
}