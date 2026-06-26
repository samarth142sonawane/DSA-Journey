#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums == sorted)
                return true;

            // Left rotate the array by one position
            int first = nums[0];
            for (int j = 0; j < n - 1; j++) {
                nums[j] = nums[j + 1];
            }
            nums[n - 1] = first;
        }

        return false;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (obj.check(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}