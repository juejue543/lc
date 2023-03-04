#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {

        if (x >= 0){
            string str = to_string(x);
            int n = str.length() - 1;
            for(int i = 0; i < str.length(); i++){
                if(str[i] != str[n]){
                    return false;
                }
                n--;

            }

            return true;


        }
        else{
            return false;
        }
        
    }
};





int main(){
    
}