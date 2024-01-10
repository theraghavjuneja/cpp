#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int pairSum(vector<int> &arr, int n, int target)
{
    std::unordered_set<int> seenNumbers;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (seenNumbers.find(complement) != seenNumbers.end()) {
            count++;
        }

        seenNumbers.insert(arr[i]);
    }

    if (count > 0) {
        return count;
    } else {
        return -1;
    }
    
}
int main()
{
    return 0;
}