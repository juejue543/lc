#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums[i] = -1;
                counter--;
        }
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    return counter;
   

    
}};