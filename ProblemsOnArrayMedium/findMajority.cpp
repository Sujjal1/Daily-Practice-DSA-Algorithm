// Find the majority elemnts. There is an element with frequency higher than half the size of an array and we have to identify
// that array.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int element;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                element = nums[i];
                count = count + 1;
            }
            else if (nums[i] != element)
            {
                count = count - 1;
            }
            else
            {
                count = count + 1;
            }
        }
        int count1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
            {
                count1 = count1 + 1;
            }
        }
        if (count1 > (nums.size() / 2))
        {
            return element;
        }
        return -1;
    }
};

int main()
{
    vector<int> a = {2, 2, 3, 2, 3, 1, 3, 2, 3, 3, 2, 2, 3, 3, 3, 3};
    Solution Obj;
    int b = Obj.majorityElement(a);
    cout << b << endl;
}
