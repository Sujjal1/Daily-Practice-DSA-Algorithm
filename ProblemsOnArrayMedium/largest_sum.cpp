// FInding the largest sum possible form the subarray.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0];
        int prev_sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (sum + nums[i] > nums[i])
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
            }
            if (sum > prev_sum)
            {
                prev_sum = sum;
            }
        }

        return prev_sum;
    }
};

int main()
{
    vector<int> a = {-5, -2, -3, -1, -8};
    Solution Obj;
    int b = Obj.maxSubArray(a);
    cout << b << endl;
}
