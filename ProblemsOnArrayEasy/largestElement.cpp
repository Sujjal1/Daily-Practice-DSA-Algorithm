// Find the largest element form the array
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int largestElement(vector<int>& nums) {
        int greatest = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(greatest<nums[i]){
                greatest = nums[i];
            }
        }
        return greatest;
    }
};

int main()
{
    vector<int> a = {11, 10, 5, 20, 4, 8, 0, -1, 25};
    Solution Obj;
    int greatest = Obj.largestElement(a);
    cout<<greatest<<endl;
    
}