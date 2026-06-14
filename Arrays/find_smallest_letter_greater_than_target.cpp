/*
Problem: Find Smallest Letter Greater Than Target
Platform: LeetCode #744
Approach: Linear Search
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        for(char ch : letters) {

            if(ch > target) {
                return ch;
            }
        }

        return letters[0];
    }
};

int main() {

    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    Solution obj;

    char result = obj.nextGreatestLetter(letters, target);

    cout << "Answer: " << result;

    return 0;
}