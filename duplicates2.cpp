#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            if (seen.count(nums[i]) && i - seen[nums[i]] <= k)
                return true;
            seen[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    // Function call
    bool result = sol.containsNearbyDuplicate(nums, k);

    // Output the result
    cout << (result ? "true" : "false") << endl;

    return 0;
}