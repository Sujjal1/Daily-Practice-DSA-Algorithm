/*
Sum of First N Numbers

*/
#include <iostream>
class Solution{	
	public:
		int NnumbersSum(int N){
			if(N<1){
                return 0;
            }
            return N+NnumbersSum(N-1);
		}
};

int main(){
    Solution Obj;
    int val = Obj.NnumbersSum(6);
    std::cout<<val<<std::endl;
}