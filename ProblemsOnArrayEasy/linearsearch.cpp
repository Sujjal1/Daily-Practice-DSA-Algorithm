//Sorting array using liner search

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i= 0; i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> a = { 0, 3, -4, 6, 0, 0, 3, 0, 8, 0};
    Solution Obj;
    int index = Obj.linearSearch(a, 1);
    cout<<"Target-position: "<<index<<endl;
}