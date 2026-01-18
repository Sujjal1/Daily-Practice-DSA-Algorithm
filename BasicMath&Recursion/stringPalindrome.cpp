/*
Check if String is Palindrome or Not
A palindrome is read same when it is reversed completely. FOr example: 121 flipped is 121 so it is palindrome but 123 flipped is 321 so it is not palindrome
*/

#include <iostream>
using namespace std;

class Solution{	
	public:		
        int count = 0;
		bool palindromeCheck(string& s){
			int size = s.size()-1-count;
            if(count>=size){
                    return true;
                }
            if(s[count]==s[size]){
                count += 1;
                palindromeCheck(s);
            }
            else{
                return false;
            }
		}
};

int main(){
    Solution Obj;
    string s = "Su00uS";
    bool val = Obj.palindromeCheck(s);
    if(val!=0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}