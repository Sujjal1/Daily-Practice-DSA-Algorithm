#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<int> insertionSort(vector<int>& nums) {
        int size = nums.size();
        int smallest = 0;
        for (int i = 0; i < size; i++){
            smallest = i;
            for(int j = i + 1 ; j < size; j++){
                if(nums[smallest]>nums[j]){
                    smallest = j;
                }
            }
            swap(&nums[smallest], &nums[i]);
        }
    }
};

int main()
{
    vector<int> a = {3, 1, 5, 2, 4};
    Solution Obj;
    Obj.insertionSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}