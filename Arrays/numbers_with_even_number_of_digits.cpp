/*
Problem: Find Numbers with Even Number of Digits
Platform: LeetCode #1295
Approach: Convert Number to String
Time Complexity: O(n * d)
Space Complexity: O(d)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            string s = to_string(nums[i]);

            if(s.length() % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {

    vector<int> nums = {12, 345, 2, 6, 7896};

    Solution obj;

    int result = obj.findNumbers(nums);

    cout << "Count = " << result;

    return 0;
}