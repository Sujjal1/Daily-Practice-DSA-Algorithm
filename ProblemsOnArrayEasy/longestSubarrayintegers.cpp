// Longest subarray of sum k for array containing any integer value
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        map<int, int> data;
        int sum = 0;
        int maxTarget = 0;
        for(int i =0; i< nums.size(); i++){
            sum = sum + nums[i];
            if (sum == k) {
                maxTarget = i + 1;
            }
            if (data.find(sum - k) != data.end()) {
                maxTarget = max(maxTarget, i - data[sum - k]);
            }
            if(data.find(sum)==data.end()){
                data[sum] = i;
            }
        }

    }
};

int main(){
    vector<int> a = {10, 5,  -1, 0, 1, 2, 7, 1, 9};
    Solution Obj;
    int num = Obj.longestSubarray(a, 15);
    cout<<num<<endl;
}