// Finding the number that is single in the array where all the other number appears twice using (XOR method)

#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xorr = 0;
        for(int i = 0; i < nums.size(); i++){
            xorr = xorr ^ nums[i];
        }   
        return xorr;
    }
};

int main()
{
    vector<int> a = {1, 3, 1, 0, 0, 2, 3, 4, 4};
    Solution Obj;
    int num = Obj.singleNumber(a);
    cout << num << endl;
}