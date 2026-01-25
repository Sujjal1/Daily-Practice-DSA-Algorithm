// Using recursion for sorting using the method of insertion sort.

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    void InsertionSort(vector<int> & nums, int count){
        if(count == nums.size()){
            return;
        }
        for(int i = count; i > 0; i--){
            if(nums[i]<nums[i-1]){
                swap(&nums[i], &nums[i-1]);
            }
            else{
                break;
            }
        }
        InsertionSort(nums, count+1);
    }
    void InsertionSort(vector<int> & nums){
        InsertionSort(nums, 1);
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

};

int main(){
    vector<int> a = {1, 3, 6, 9, 0, 4};
    Solution Obj;
    Obj.InsertionSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}