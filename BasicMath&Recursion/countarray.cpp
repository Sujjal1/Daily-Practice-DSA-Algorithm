#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<int>> countFrequencies(vector<int> &nums)
    {
        unordered_map<int, int> place;
        for (int i = 0; i < nums.size(); i++)
        {
            place[nums[i]] += 1;
        }

        vector<vector<int>> answer;
        for (auto it : place)
        {
            answer.push_back({it.first, it.second});
        }

        return answer;
    }
};

int main()
{
    Solution Obj;
    vector<int> a = {1, 2, 1, 3, 4, 3};
    vector<vector<int>> b = Obj.countFrequencies(a);
    for(int i = 0; i < b.size(); i++){
        cout << b[i][0] << "-->"<< b[i][1] << endl;
    }
}