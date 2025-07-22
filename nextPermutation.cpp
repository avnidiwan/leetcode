#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return nums;
        }
        for (int i = n - 1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }
        reverse(nums.begin() + idx + 1, nums.end());
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums;

    cout << "Enter elements of the array (space-separated, end with -1): ";
    int x;
    while (cin >> x && x != -1) {
        nums.push_back(x);
    }

    vector<int> result = sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}