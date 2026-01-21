/*
Bubble Sort Algorithm


*/
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

    void bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(&nums[j], &nums[j + 1]);
                }
            }
        }
    }
};

int main()
{
    vector<int> a = {3, 1, 5, 2, 4};
    Solution Obj;
    Obj.bubbleSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}

