#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}
int main()
{
    int arr[7]={4,5,2,3,1,5,8};
    reverseArray(arr,7);
    for(int i:arr)
    {
        cout<<i<<endl;
    }
    return 0;
}