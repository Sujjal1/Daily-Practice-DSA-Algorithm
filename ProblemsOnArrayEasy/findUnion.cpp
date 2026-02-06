// Find the union of the arrays that are sorted
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;
        vector<int> res;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                if (res.empty() || res.back() != nums1[i])
                    res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                if (res.empty() || res.back() != nums1[i])
                    res.push_back(nums1[i]);
                i++;
            }
            else
            {
                if (res.empty() || res.back() != nums2[j])
                    res.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size())
        {
            if (res.empty() || res.back() != nums1[i])
                res.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size())
        {
            if (res.empty() || res.back() != nums2[j])
                res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};

int main()
{
    vector<int> a = {1, 1, 3, 4, 5, 5, 9};
    vector<int> b = {1, 2, 2, 8, 10, 10};
    Solution Obj;
    vector<int> c = Obj.unionArray(a, b);
    int size = c.size();
    for (int i = 0; i < size; i++)
    {
        cout << c[i] << endl;
    }
}