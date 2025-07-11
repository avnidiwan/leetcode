#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
    int n=nums.size(), count=0, longest=1, lastsmallest=INT_MIN;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        if(nums[i]-1==lastsmallest){
            count++;
            lastsmallest=nums[i];
        }
        else if(nums[i] !=lastsmallest){
            count=1;
            lastsmallest=nums[i];
        }
        longest=max(count,longest);
    }
    return longest;
    }
};