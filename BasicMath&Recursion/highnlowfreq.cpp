#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countFrequencies(vector<int> &nums)
    {
        int max = 0;
        int maxEle = 100;
        unordered_map<int, int> place;
        for (int i = 0; i < nums.size(); i++)
        {
            place[nums[i]] += 1;
            if(place[nums[i]]>max){
                max = place[nums[i]];
                maxEle = nums[i];
            }
            else if (place[nums[i]] == max && nums[i] < maxEle){
                maxEle = nums[i];
            }
        }

        return maxEle;
    }
};

int main()
{
    Solution Obj;
    vector<int> a = {1, 6, 6, 6, 6, 3, 3, 3, 4, 4, 2, 2, 2, 2};
    int b = Obj.countFrequencies(a);
    cout<<b<<endl;
}