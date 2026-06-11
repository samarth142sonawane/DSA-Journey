/*
Problem: Contains Duplicate
Platform: LeetCode #217
Approach: Brute Force (Nested Loops)
Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                if(nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {

    vector<int> nums = {1, 2, 3, 1};

    Solution obj;

    if(obj.containsDuplicate(nums)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}