#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i=i+2)
    {
        if((i+1)<size)
        {
            swap(arr[i],arr[i+1]);
        }

    }

}
int main()
{
    // given an array need to swap the alternate elements in it
    int arr[6]={1,2,3,4,5,6};
    swapAlternate(arr,6);
    for(int i:arr)
    {
        cout<<i<<endl;
    }


    return 0;
}