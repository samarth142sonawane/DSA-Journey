/*
Problem: Squares of a Sorted Array
Platform: LeetCode #977
Approach: Square Each Element and Sort
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};

int main() {

    vector<int> nums = {-4, -1, 0, 3, 10};

    Solution obj;

    vector<int> result = obj.sortedSquares(nums);

    cout << "Sorted Squares: ";

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}