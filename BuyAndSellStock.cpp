#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mincost = prices[0];
        int maxprofit = 0;
        for (int i = 1; i < n; i++) {
            int cost = prices[i] - mincost;
            maxprofit = max(cost, maxprofit);
            mincost = min(prices[i], mincost);
        }
        return maxprofit;
    }
};

int main() {
    Solution obj;

    // Sample input: Change this to test other cases
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    int result = obj.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}