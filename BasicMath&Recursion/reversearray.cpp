/*
Reverse an array
*/
#include<iostream>
using namespace std;
class Solution{
public:
    void reverse(int arr[], int n, int i){
        if(i>=n/2)
        {
            return;
        }
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
        reverse(arr, n, i+1);
    }
};

int main(){
    Solution Obj;
    int n = 6;
    int arr[]={1,2,3,4,5,6};
    Obj.reverse(arr, n, 0);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}
