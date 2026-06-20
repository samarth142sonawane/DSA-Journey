/*
Problem: Check if a String is Palindrome
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}