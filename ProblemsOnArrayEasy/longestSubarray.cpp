//Longest Subarry from the array whose sub is k(User given value)
//Note: All elements in array are posetive

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int sum = 0;
        int start = 0;
        int target = 0;

        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            while (sum > k) {
                sum -= nums[start];
                start++;
            }
            if(sum==k){
                int val = i - start + 1;
                if(target < val){
                    target = val;
                }
            }
        }
        return target;
    }
};

int main(){
    vector<int> a = {20, 5, 2, 7, 1, 9};
    Solution Obj;
    int num = Obj.longestSubarray(a, 15);
    cout<<num<<endl;
}