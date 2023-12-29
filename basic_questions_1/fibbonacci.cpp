#include<iostream>
using namespace std;
// will print the fibbonaci sequence here
int main()
{
    int a=0;
    int b=1;
    
    int n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++)
    {
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
    return 0;
}
// FIBBONACCI QUESTION IS ON BOTH CODINGNINJAS AS WELL AS LEETCODE
// ANYONE CAN CHECL