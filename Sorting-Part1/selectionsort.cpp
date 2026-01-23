/*
Selection Sort
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int minIndex = i;
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(&nums[i], &nums[minIndex]);
        }
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
    vector<int> a = {5, 4, 4, 1, 1};
    Solution Obj;
    Obj.selectionSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}