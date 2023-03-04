#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n;j++){
                if (nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
}}}
    return res;
}};

int main(){
}


  // I tried to do a program that doesn't use o(n^2) complexity, but i had a problem with returning the index of the unsorted num
  /*
  
  */