/*
Problem: Search Insert Position
Platform: LeetCode #35
Approach: Linear Search
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] == target) {
                return i;
            }
        }

        for(int i = 0; i < n - 1; i++) {

            if(nums[i] < target && nums[i + 1] > target) {
                return i + 1;
            }
        }

        if(target < nums[0]) {
            return 0;
        }

        return n;
    }
};

int main() {

    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    Solution obj;

    int result = obj.searchInsert(nums, target);

    cout << "Insert Position: " << result << endl;

    return 0;
}