/*
Fibonacci Number
*/
#include <iostream>
class Solution {
public:
    int fib(int n) {
        if(n<=0)
        {
            return 0;
        }
        if(n==1){
            return 1;
        }
         return fib(n-1)+fib(n-2);
        
    }
};

int main(){
    Solution Obj;
    int val = Obj.fib(6);
    std::cout<<val<<std::endl;
}