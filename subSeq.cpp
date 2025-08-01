#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_ptr = 0, t_ptr = 0;
        while (s_ptr < s.size() && t_ptr < t.size()) {
            if (s[s_ptr] == t[t_ptr]) {
                s_ptr++;
            }
            t_ptr++;
        }
        return s_ptr == s.size();
    }
};

int main() {
    Solution solution;

    // Sample inputs
    string s = "ace";
    string t = "abcde";

    if (solution.isSubsequence(s, t)) {
        cout << "\"" << s << "\" is a subsequence of \"" << t << "\"." << endl;
    } else {
        cout << "\"" << s << "\" is NOT a subsequence of \"" << t << "\"." << endl;
    }

    return 0;
}