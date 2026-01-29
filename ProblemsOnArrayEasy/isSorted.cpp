//CHeck if the array is sorted or not
#include <iostream>
#include <vector>

using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i = 0; i < nums.size()-1; i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }
            return true;
		}
};

int main()
{
    vector<int> a = {1, 4, 5};
    Solution Obj;
    bool isSorted = Obj.isSorted(a);
    cout<<isSorted<<endl;   
}