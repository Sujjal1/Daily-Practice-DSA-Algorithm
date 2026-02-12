//Sorting an array containing only 1's, 0's and 2's

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while (mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid = mid + 1;
                low = low + 1;
            }
            else if(nums[mid] == 1){
                mid = mid + 1;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high = high -1;
            }
        }
    }
};

int main(){
    vector<int> a = {1,2, 1, 1, 2, 1, 0};
    Solution Obj;
    Obj.sortZeroOneTwo(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}

