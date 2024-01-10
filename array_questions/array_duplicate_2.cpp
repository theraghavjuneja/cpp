#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int findDuplicates(vector<int>&arr,int n)
{
    unordered_set<int> seen;

    for (int num : arr) {
        if (seen.count(num)) {
            return num;
        } else {
            seen.insert(num);
        }
    }
    return -1;

}
// since count is based on hash table so count occurs in o(1)
// due to which overall complexity O(n) just of the loop
int main()
{
    return 0;
}