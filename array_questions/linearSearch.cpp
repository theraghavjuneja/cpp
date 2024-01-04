#include<iostream>
// In linear search each element is traversed once
// so the complexity becomes O(n)
// not considered to be a good approach but still
bool linearSearch(int arr[],int size,int key)
{
    // assume key is the thing I want to searc
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }

    }
    return 0;

}
using namespace std;
int main()
{
    // consider another array
    int nums[7]={1,10,2,5,3,2,6};
    int element=6;
    // assume 6 to search
    cout<<linearSearch(nums,7,6);

    return 0;
}