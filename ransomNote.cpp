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
    Solution sol;
    string ransomNote, magazine;

    // Sample input
    cout << "Enter ransomNote: ";
    cin >> ransomNote;
    cout << "Enter magazine: ";
    cin >> magazine;

    // Output result
    bool result = sol.canConstruct(ransomNote, magazine);
    if (result)
        cout << "Ransom note can be constructed from magazine." << endl;
    else
        cout << "Ransom note cannot be constructed from magazine." << endl;

    return 0;
}