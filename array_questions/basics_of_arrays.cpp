#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main()
{
    // Declaration of an array
    int arr[15];
    // an array of name arr having the size of 15 has been declared now
    int arr2[100]={0};
    // the above approach works only for zero an array of size 100 having all elements as 0 has been declared now
    cout<<"Value at 10 th index "<<arr[10]<<endl;

    int number[3]={1,2,3};
    // lets find the size of array ourself
    int size=sizeof(number)/sizeof(int);
    printArray(number,3);
    cout<<"Size of array found by dividing total size by int size"<<size<<endl;
    return 0;
}

// WHAT IS A BAD PRACTISE HERE
// TO DECLARE THE SIZEOF ARRAY AS RUNTIME IS CONSIDERED TO BE A BAD PRACTISE
// SINCE WE DONT WANT THAT COMPILER SHOULD KNOW SIZE AT RUNTIME
// THEREFORE SIZE KO PHLE HI DECLARE KRDIA KRO
