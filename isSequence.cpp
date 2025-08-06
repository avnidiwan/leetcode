#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};

int main() {
    Solution sol;
    string s = "abc";
    string t = "ahbgdc";

    if (sol.isSubsequence(s, t)) {
        cout << s << " is a subsequence of " << t << endl;
    } else {
        cout << s << " is NOT a subsequence of " << t << endl;
    }

    return 0;
}