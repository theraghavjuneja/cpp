#include<iostream>
using namespace std;
// concept xor of 2 same elements is zero
int findUnique(int arr[],int size)
{
    int element=0;
    for(int i=0;i<size;i++)
    {
        // remeber har baari jo last answer tha elemenet ka ham usko aage compare kr rhe hain
        element=element^arr[i];
    }
    return element;
}
int main()
{
    int arr[5]={2, 4, 7 ,2 ,7};
    cout<<findUnique(arr,5);
    return 0;
}