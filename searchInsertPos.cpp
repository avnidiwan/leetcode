#include <iostream>
#include <vector>
#include <algorithm> // for lower_bound

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return lb;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int result = sol.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}