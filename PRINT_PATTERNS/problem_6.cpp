#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows and columsn u want to print"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}