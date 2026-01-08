/*
Print 1 to N Using Recursion

Implement a recursive function to print numbers from 1 to n (inclusive), one per line, without using loops.
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
        printNumbers(n);
        cout<<n+1<<endl;
    }
};

int main(){
    Solution Obj;
    Obj.printNumbers(4);
}