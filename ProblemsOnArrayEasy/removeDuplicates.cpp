// Remove duplicate element from the sorted array

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        int duplicates = nums.size() - (j + 1);
        nums.resize(j + 1);
        return duplicates;
    }
};

int main()
{
    vector<int> a = {1, 1, 1, 1, 2, 2, 3, 3};
    Solution Obj;
    int removeDuplicates = Obj.removeDuplicates(a);
    cout << "no of duplictes:  " << removeDuplicates << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}