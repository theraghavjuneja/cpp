#include<iostream>
#include<vector>
using namespace std;
int pairSum(vector<int> &arr, int n, int target)
{
    // again here the complexity is o(n2)
    int sum=0;
	for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                sum++;

            }
        }
    }
    if(sum)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    int target=6;
    cout<<pairSum(arr,5,4);
    return 0;
}