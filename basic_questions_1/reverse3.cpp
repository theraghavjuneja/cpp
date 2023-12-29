#include<iostream>
using namespace std;
// reversing a string using recursion
void reverse(string x)
{
    // i need to reverse this with the help of recursion
    if(x.size()==0)
    {
        return ;
    }
    char c=x[0];
    reverse(x.substr(1,x.size()));
    cout<<c<<endl;

}
int main()
{
    string t="2453";
    reverse(t);
    return 0;
}