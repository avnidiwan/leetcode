#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        for (char c : magazine) {
            freq[c]++;
        }
        for (char c : ransomNote) {
            if (freq[c] == 0) {
                return false;
            }
            freq[c]--;
        }
        return true;
    }
};

int main() {
    string ransomNote, magazine;

    // Sample input
    cout << "Enter ransom note: ";
    cin >> ransomNote;
    cout << "Enter magazine: ";
    cin >> magazine;

    Solution sol;
    bool result = sol.canConstruct(ransomNote, magazine);

    if (result)
        cout << "Yes, ransom note can be constructed." << endl;
    else
        cout << "No, ransom note cannot be constructed." << endl;

    return 0;
}