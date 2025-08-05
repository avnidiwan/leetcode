#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {1, 2, 3, -1, 1, 2};
    int k = 3;

    // Call the function and print the result
    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}