// Find the second largest element form the array without sorting
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int SecondLargest = INT_MIN;
        int Largest = nums[0];
        for(int i =1; i<nums.size(); i++){
            if(Largest<nums[i]){
                swap(&Largest, &SecondLargest);
                Largest = nums[i];
            }
            else if(SecondLargest<nums[i] and nums[i]!=Largest){
                SecondLargest = nums[i];
            }
        }
        if(SecondLargest == INT_MIN){
            return -1;
        }
        return SecondLargest;
      
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
    vector<int> a = {-5,0, 1, 8, 8, 5, -5};
    Solution Obj;
    int secondLargest = Obj.secondLargestElement(a);
    cout<<secondLargest<<endl;
    
}