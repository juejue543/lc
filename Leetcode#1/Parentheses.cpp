#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        bool res = false;
        stack<int>stck;

       if(n%2 == 0){
        for(int i = 0; i< n; i++){
            int stoi = s[i];
            if(stoi == 40 || stoi == 91 || stoi == 123){
                stck.push(stoi);
            }
            else if(!stck.empty()){
                if (stoi == stck.top() + 1 || stoi == stck.top() + 2){
                    stck.pop();
                    res = true;
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
        }
        if(stck.empty()){
        return res;}
        
}
return false;

       
    
};};