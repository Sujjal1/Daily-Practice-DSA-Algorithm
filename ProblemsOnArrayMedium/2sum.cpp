//fidning two numbers whose sum is target from the array
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> data;
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            if(data.find(val)!=data.end()){
                return {data[val], i};
            }
            else{
                data[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};

int main(){
    vector<int> a = {1,2, 1, 1, 2, 3, 0};
    Solution Obj;
    vector<int> b = Obj.twoSum(a, 4);
    cout<<b[0]<<" "<< b[1]<< endl;
}

