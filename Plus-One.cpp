#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
        int n = digits.size() - 1;
        if(digits[n] != 9){
            digits[n]++;
            return digits;
        }
        else{
            reverse(digits.begin(), digits.end());
           
            for(int i = 0; i <digits.size(); i++){
                if(digits[i] == 9){
                    digits[i] = 0;
                }
                else{
                    digits[i]++;
                    reverse(digits.begin(), digits.end());
                    return digits;
                }

            }
            if(digits[n] == 0){
                digits.push_back(1);
            }
            reverse(digits.begin(), digits.end());
            


        }
        return digits;}}
