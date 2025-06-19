#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }

    int majority = nums[0];
    int maxCount = 0;

    for(auto it : m) {
        if(it.second > maxCount) {
            maxCount = it.second;
            majority = it.first;
        }
    }

    return majority;

    }
};
int main(){
    Solution sol;
    vector<int> nums = {3, 2, 3,2, 3, 1, 3};
    int result = sol.majorityElement(nums);
    cout << "Majority Element: " << result << endl; // Output: 3
    return 0;
}