/*
Problem: Plus One
Platform: LeetCode #66
Approach: Traverse from Right to Left
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {

    vector<int> digits = {1, 2, 3};

    Solution obj;
    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}