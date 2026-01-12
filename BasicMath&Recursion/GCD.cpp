/*
Method to fidn gcd

*/
#include <iostream>
using namespace std;

// class Solution {
// public:
//     int GCD(int n1,int n2) {
//         int val;
//         if(n1%n2 == 0)
//         {
//             return n2;
//         }
//         if(n2%n1 == 0)
//         {
//             return n1;
//         }
//         if(n1==n2){
//             return n1;
//         }
//         int max = 0;
//         if(n1>n2){
//             val = n2;
//         }
//         else{
//             val = n1;
//         }

//         for(int i =1; i * i <= val; i++){
//             int another = (val/i);
//             if(n1%i == 0 && n2%i==0)
//             {
//                 if(i > max){
//                     max = i;
//                 }
//             }
//             if(n1%another==0 && n2%another==0)
//             {
//                 if(another > max){
//                     max = another;
//                 }
//             }
//         }
//         return max;
//     }
// };

// int main()
// {
//     Solution Obj;
//     int ans = Obj.GCD(20, 30);
//     cout<<ans<<endl;

//     return 0;
// }

// Euclidean Method to fidn gcd

class Solution
{
public:
    int GCD(int n1, int n2)
    {
        int max;
        while (n1 != 0 && n2 != 0)
        {
            if (n1 > n2){
                n1 = n1 % n2;
            }
            else
            {
                n2 = n2 % n1;
            }
        }
        if (n1 == 0)
        {
            return n2;
        }
        return n1;
    }
};

int main()
{
    Solution Obj;
    int ans = Obj.GCD(20, 30);
    cout << ans << endl;
    return 0;
}
