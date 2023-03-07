#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    string addBinary(string a, string b) {
        int ss = a.length() - b.length();
        int l;
    
        if(ss != 0){
            if(ss > 0){
                reverse(b.begin(), b.end());
                for(int i = 0 ; i < ss;i++){
                    b += '0';
                }
                reverse(b.begin(), b.end());
                int l = a.length();


            }
            else{
                 reverse(a.begin(), a.end());
                for(int i = 0 ; i < abs(ss);i++){
                    a += '0';
                }

                reverse(a.begin(), a.end());
                int l = b.length();


            }
            
        }


        reverse(a.begin(),a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        string s;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == '1' && b[i] == '1'){
                if(carry == 1){
                    s+= '1';
                }
                else{
                s+= '0';
                carry++;}

            }
            else if(a[i] == '0'&& b[i] == '0'){
                if(carry == 1){
                    s+= '1';
                    carry--;
                }
                else{
                s+= '0';}
            }
            else if(a[i] != b[i]){
                if(carry == 1){
                    s+= '0';
                }
                else{
                s+= '1';}
            }

            
            }

            if(carry == 1){
                s+= '1';
            }

            reverse(s.begin(), s.end());
           
    return s;
        }

       

        
    //111
    //111
    

        
    };