#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[lastNonZero++], nums[i]);
            }
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Mixed non-zeros and zeros
    vector<int> n1 = {0, 1, 0, 3, 12};
    sol.moveZeroes(n1);
    cout << "Test 1: ";
    for (int x : n1) cout << x << " ";
    cout << "\n";

    // Test Case 2: Edge case (all zeros)
    vector<int> n2 = {0, 0, 0};
    sol.moveZeroes(n2);
    cout << "Test 2: ";
    for (int x : n2) cout << x << " ";
    cout << "\n";

    return 0;
}