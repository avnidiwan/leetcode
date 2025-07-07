#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        int ansStart = -1, ansEnd = -1, start = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum == 0) start = i;
            sum += nums[i];
            if (sum > maxSum) {
                maxSum = sum;
                ansStart = start;
                ansEnd = i;
            }
            if (sum < 0) sum = 0;
        }

        // Optional: Print the subarray
        cout << "Maximum subarray is from index " << ansStart << " to " << ansEnd << endl;
        return maxSum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Example input
    Solution sol;
    int maxSum = sol.maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}