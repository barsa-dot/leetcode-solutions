#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 1e9, maxProf = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProf = max(maxProf, price - minPrice);
        }
        return maxProf;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case with profit
    vector<int> p1 = {7, 1, 5, 3, 6, 4};
    cout << "Test 1: " << sol.maxProfit(p1) << "\n";

    // Test Case 2: Edge case (strictly decreasing prices, 0 profit)
    vector<int> p2 = {7, 6, 4, 3, 1};
    cout << "Test 2: " << sol.maxProfit(p2) << "\n";

    return 0;
}