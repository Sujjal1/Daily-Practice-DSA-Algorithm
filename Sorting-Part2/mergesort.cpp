/*
Problem:  Given an array of size n, sort the array using Merge Sort.

Examples:

Example 1:
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7,


Example 2:
Input: N=7,arr[]={3,2,8,5,1,4,23}
Output: 1,2,3,4,5,8,23
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void Merge(vector<int>& nums, int p, int q, int r){
        int n1 = q-p+1;
        int n2 = r-q;
        vector<int> L(n1), R(n2);
        for(int i = 0; i < n1; i++){
            L[i] = nums[p+i];
        }
        for(int j = 0; j < n2; j++){
            R[j] = nums[q+1+j];
        }
        int i=0; int j = 0;
        int k = p;
        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                nums[k] = L[i];
                i= i+1;
            }
            else{
                nums[k]=R[j];
                j = j + 1;
            }
            k = k+1;
        }
        while(i<n1){
            nums[k]= L[i];
            i= i+1;
            k = k+1;
        }
        while(j<n2){
            nums[k]= R[j];
            j= j+1;
            k = k+1;
        }
    }
    void MS(vector<int>& nums, int p, int r){
        if(p>=r){
            return;
        }
        int q= (p+r)/2;
        MS(nums, p, q);
        MS(nums, q+1, r);
        Merge(nums, p, q, r);
    }
    void mergeSort(vector<int>& nums) {
        MS(nums, 0, nums.size()-1);
    }
};

int main()
{
    vector<int> a = {3, 1, 5, 2, 4};
    Solution Obj;
    Obj.mergeSort(a);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl;
    }
}