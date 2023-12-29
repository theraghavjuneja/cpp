#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int x)
{
    string k=to_string(x);
    int ans=0;
    while(x!=0)
    {
        int digit=x%10;
        // suppose that the string was too large
        if((ans>INT_MAX/10)||(ans<INT_MIN/10))
        {
            return 0;
        }
        ans=digit+(ans*10);
        x=x/10;
    }

    return ans;
}
int main()
{
    return 0;
}