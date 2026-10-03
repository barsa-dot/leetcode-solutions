#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;

    // Test Case 1: Valid parentheses combination
    cout << "Test 1: " << (sol.isValid("()[]{}") ? "True" : "False") << "\n";

    // Test Case 2: Edge case (mismatched/unbalanced)
    cout << "Test 2: " << (sol.isValid("(]") ? "True" : "False") << "\n";

    return 0;
}