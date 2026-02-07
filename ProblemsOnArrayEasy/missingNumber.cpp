//Finding the only number missing from the array within this range.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        int total = (size*(size+1))/2;
        for(int i =0; i<size; i++){
            sum = sum + nums[i];
        }
        return total-sum;
    }
};

int main(){
    vector<int> a = {1, 3, 6, 4, 2, 5};
    Solution Obj;
    int missing_number = Obj.missingNumber(a);
    cout<<"Missing Number: "<<missing_number<<endl;
}