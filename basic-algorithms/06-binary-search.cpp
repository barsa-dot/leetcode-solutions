#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Element present
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    cout << "Test 1: " << sol.search(nums1, 9) << "\n";

    // Test Case 2: Edge case (element not present)
    cout << "Test 2: " << sol.search(nums1, 2) << "\n";

    return 0;
}