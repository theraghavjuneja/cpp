#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int pairSum(vector<int> &arr, int n, int target)
{
    int sum=0;
    unordered_set<int> sumRequired;
    for(int num:arr)
    {
        if(sumRequired.count(num))
        {
            sum++;
        }
        else
        {
            sumRequired.insert(target-num);
        }
    }
    if(sum)
    {
        return sum;
    }
    else
    {
        return -1;
    }

}
// tc=o(n) still not getting accepted reason idk
int main()
{
    vector<int>arr={1,2,3,4,5};
    int target=6;
    cout<<pairSum(arr,5,4);
    return 0;
    return 0;
}