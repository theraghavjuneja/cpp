#include <iostream>
#include <math.h>
using namespace std;
// iterative approach of conversion of binary to decimal

int main()
{
    int n = 1010;
    // keep on multiplying by the powers of it
    string n1 = to_string(n);
    int k = n1.size();
    int answer = 0;
    int j = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        answer = answer + (int(n1[j]-'0') * pow(2, i));
        j++;
    }
    cout << answer;
    return 0;
}