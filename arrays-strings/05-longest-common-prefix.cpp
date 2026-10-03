#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].length() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case with prefix
    vector<string> s1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << sol.longestCommonPrefix(s1) << "\n";

    // Test Case 2: Edge case (no common prefix)
    vector<string> s2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << sol.longestCommonPrefix(s2) << "\n";

    return 0;
}