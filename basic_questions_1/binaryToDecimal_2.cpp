#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(string str, int size, int answer)
{
    // that means only the last element of the number is remaining
    if(size==1)
    {
        return answer+((int((str[0]-'0'))*pow(2,size-1)));
    }
    // meaning any from 1st to last-1 element can be there
    else
    {
        return binaryToDecimal(str.substr(1,size),size-1,answer+(int(str[0]-'0')*pow(2,size-1)));
    }
}

int main()
{
    cout << binaryToDecimal("1000", 4, 0) << endl;

    return 0;
}
