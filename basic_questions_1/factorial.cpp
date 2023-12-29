#include<iostream>
using namespace std;
// iterative approach to calculatr factorial
int factorial(int n)
{
    int i=1;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    return fact;
}
// recursive approach of factoril
int factorial2(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial2(n-1);
    }
}
int main()
{
    int n=5;
    cout<<factorial2(5)<<endl;
    return 0;
}