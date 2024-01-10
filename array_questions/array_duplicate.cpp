#include<iostream>
#include<vector>
using namespace std;
int findDuplicates(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[j];
            }
        }
    }
}
// this one is the 1st approach of solving 
// TIME COMPLEIXTY O(N2)
int main()
{
    vector<int>arr={1,3,3,4,2};
    cout<<findDuplicates(arr,5);
    
    return 0;
}