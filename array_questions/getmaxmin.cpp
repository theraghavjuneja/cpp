// Here it has shown how to find the max and min element in an array
#include<iostream>
#include<limits.h>
int getMin(int nums[],int n)
{
    // assuming n is the sie of array
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<mini)
        {
            mini=nums[i];
        }
    }
    return mini;
}
// now lets find the max element of an array 
int getMax(int nums[],int m)
{
    // again assume that the m is the size of the array
    int maxi=INT_MIN;
    for(int i=0;i<m;i++)
    {
        if(nums[i]>maxi)
        {
            maxi=nums[i];
        }
    }
    return maxi;

}
using namespace std;
int main()
{
    int nums[7]={1,10,2,5,3,2,6};
    // lets see the minimum element
    cout<<getMin(nums,7)<<endl;
    cout<<getMax(nums,7);
    return 0;
}