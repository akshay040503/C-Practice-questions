#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0;

    // increasing part
    while(i + 1 < n && arr[i] < arr[i + 1])
        i++;

    // peak cannot be first or last
    if(i == 0 || i == n - 1) {
        cout << "Not Mountain Array";
        return 0;
    }

    // decreasing part
    while(i + 1 < n && arr[i] > arr[i + 1])
        i++;

    if(i == n - 1)
        cout << "Mountain Array";
    else
        cout << "Not Mountain Array";

    return 0;
}


// An array is called a Mountain Array if:

// numbers strictly increase
// then strictly decrease

// Write a program to check whether the given array is a Mountain Array or not.

// Example

// Input

// 5
// 1 3 7 5 2

// Output

// Mountain Array

// Explanation

// 1 → 3 → 7 (increasing)
// 7 → 5 → 2 (decreasing)