/*
 Bubble Sort using recursion only.
*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void selectionSort(vector<int>& nums, int count){
        if(count<1){
            return;
        }
        for(int index = 0; index <= count; index++){
            if(nums[index]>nums[index+1]){
                swap(&nums[index], &nums[index+1]);
            }
        }
        selectionSort(nums, count-1);
    }
    void selectionSort(vector<int>& nums) {
        selectionSort(nums, nums.size()-1);
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main()
{
    vector<int> a = {5,4,3,2,1, 8, 0, -1};
    Solution Obj;
    Obj.selectionSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}