/*
Factorial of N numbers
*/

#include <iostream>
using namespace std;

class Solution {
  public:
    int printFact(int n) {
        if(n <= 1)
        {
            return 1;
        }
        return n*printFact(n-1);
    }
};

int main(){
    Solution Obj;
    int val = Obj.printFact(4);
    cout<< val<<endl;
}