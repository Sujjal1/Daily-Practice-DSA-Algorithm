/*
Print all Divisors of a Number
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> values;
        for(int i = 1; i * i <= n; i++){
            if(n%i == 0){
                values.push_back(i);
                int val = n/i;
                if(val != i){
                    values.push_back(val);
                }
            }
        }
        sort(values.begin(), values.end());
        return values;
        }
};

int main(){
    Solution Obj;
    vector<int> values = Obj.divisors(36);
    for(int i = 0; i < values.size(); i++){
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}