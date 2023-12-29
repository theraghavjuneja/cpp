#include<iostream>
#include<stack>
using namespace std;
void reverse(int x)
{
    stack<int>s;
    string k=to_string(x);
    // in short I need to reverse the string k
    while(!k.empty())
    {
        s.push(k[0]-'0');
        k=k.substr(1,k.size());
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    int x=2453;
    reverse(x);
    return 0;
}