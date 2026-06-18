/*
Problem: Maximum Product of Three Numbers
Platform: LeetCode #628
Approach: Sorting
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int product2 = nums[0] * nums[1] * nums[n - 1];

        return max(product1, product2);
    }
};

int main() {

    vector<int> nums = {-10, -10, 1, 2, 3};

    Solution obj;

    int result = obj.maximumProduct(nums);

    cout << "Maximum Product: " << result << endl;

    return 0;
}