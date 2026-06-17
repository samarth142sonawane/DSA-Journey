/*
Problem: Union of Two Sorted Arrays
Platform: DSA Practice
Approach: Two Pointers
Time Complexity: O(n + m)
Space Complexity: O(n + m)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> unionSortedArrays(vector<int>& a, vector<int>& b) {

    vector<int> result;

    int i = 0;
    int j = 0;

    while(i < a.size() && j < b.size()) {

        if(a[i] < b[j]) {

            if(result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }

            i++;
        }
        else if(a[i] > b[j]) {

            if(result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }

            j++;
        }
        else {

            if(result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }

            i++;
            j++;
        }
    }

    while(i < a.size()) {

        if(result.empty() || result.back() != a[i]) {
            result.push_back(a[i]);
        }

        i++;
    }

    while(j < b.size()) {

        if(result.empty() || result.back() != b[j]) {
            result.push_back(b[j]);
        }

        j++;
    }

    return result;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 5, 6, 7};

    vector<int> result = unionSortedArrays(arr1, arr2);

    cout << "Union: ";

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}