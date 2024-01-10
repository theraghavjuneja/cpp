#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;
// array intersection means that I have to retain only the common elements in both the arrats
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    unordered_set<int> answerset;
    vector<int> answervector;
    int i = 0;
    int j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            answerset.insert(nums2[j]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
    }
    for(int i:answerset)
    {
        answervector.push_back(i);
    }
    return answervector;
}
int main()
{
    return 0;
}