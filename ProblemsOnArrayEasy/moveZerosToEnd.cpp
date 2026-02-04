//Moving all the arrays from the start to the end
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[a], nums[i]);
                a = a + 1;
            }
        }
    }
};

int main(){
    vector<int> a = { 0, 3, -4, 6, 0, 0, 3, 0, 8, 0};
    Solution Obj;
    Obj.moveZeroes(a);
    int size = a.size();
    for(int i =0; i< size; i++){
        cout<<a[i]<<endl;
    }
}