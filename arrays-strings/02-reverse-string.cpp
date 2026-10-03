#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical string
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s1);
    cout << "Test 1: ";
    for (char c : s1) cout << c;
    cout << "\n";

    // Test Case 2: Edge case (single character)
    vector<char> s2 = {'a'};
    sol.reverseString(s2);
    cout << "Test 2: " << s2[0] << "\n";

    return 0;
}