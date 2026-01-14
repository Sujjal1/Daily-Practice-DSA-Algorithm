/*
Print N to 1 using Recursion
*/

#include <iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if(n < 1)
        {
            return;
        }
        n--;
        
        cout<<n+1<<endl;
        printNumbers(n);
    }
};

int main(){
    Solution Obj;
    Obj.printNumbers(4);
}