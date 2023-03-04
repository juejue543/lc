#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int high = nums.size() -1 ;
        int low = 0;
        
        int res;
        if(target > nums[high]){
            return high+1;
        }
        else if(target < nums[0]){
            return 0;
        }
        else{
        while(low <= high){
            int mid = (high + low) /2;
            res = mid;
            if(target > nums[mid] && target < nums[mid+1]){
                return res+1;
            }
            if(target == nums[mid]){
                res = mid;
                return res;
            }
            else if( target > nums[mid]){
                low = mid + 1;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            
            }
            }
            }
            
            return res;
            

    }}
;