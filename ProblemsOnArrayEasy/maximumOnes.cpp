//Finding the maximum number of consecutive ones in the array

#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int currentCount = 0;
        int maxCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==1){
                currentCount = currentCount + 1;
                if(maxCount<currentCount){
                    maxCount = currentCount;
                }
            }
            else{
                currentCount = 0;
            }
        }
        return maxCount;

    }
};

int main(){
    vector<int> a = {1,1,0, 0, 1, 1, 1, 1, 0, 0};
    Solution Obj;
    int num = Obj.findMaxConsecutiveOnes(a);
    cout<<num<<endl;
}