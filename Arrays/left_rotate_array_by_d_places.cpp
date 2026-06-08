/*
Problem: Left Rotate Array by D Places
Approach: Brute Force
Time Complexity: O(n*d)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {

    d = d % n;

    for(int i = 0; i < d; i++) {

        int first = arr[0];

        for(int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = first;
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    leftRotate(arr, n, d);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}