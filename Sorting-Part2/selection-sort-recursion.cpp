/*
    Selection Sort using recursion only.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& nums, int start) {
    if (start >= nums.size() - 1) {
        return;
    }

    int minIndex = start;
    for (int i = start + 1; i < nums.size(); i++) {
        if (nums[i] < nums[minIndex]) {
            minIndex = i;
        }
    }

    swap(&nums[start], &nums[minIndex]);

    selectionSort(nums, start + 1);
    }   

    void selectionSort(vector<int>& nums) {
        selectionSort(nums, 0);
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
    vector<int> a = {3, 1, 5, 2, 4, 8, 0, -1, 1};
    Solution Obj;
    Obj.selectionSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}