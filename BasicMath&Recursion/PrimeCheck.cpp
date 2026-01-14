/*
Check for Prime Number
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n<=0){
            return 0;
        }
        for(int i = 2 ; i < n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution Obj;
    bool ans = Obj.isPrime(7);
    if(ans == 0){
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
    }

    return 0;
}