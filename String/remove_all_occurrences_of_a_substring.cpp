/*
Problem: Remove All Occurrences of a Substring
Platform: LeetCode #1910
Approach: Repeated String Search and Erase
Time Complexity: O(n * m) (approximately)
Space Complexity: O(1) (excluding input string)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {

        while (s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }

        return s;
    }
};

int main() {

    string s, part;

    cout << "Enter the main string: ";
    cin >> s;

    cout << "Enter the substring to remove: ";
    cin >> part;

    Solution obj;

    string result = obj.removeOccurrences(s, part);

    cout << "Result: " << result << endl;

    return 0;
}