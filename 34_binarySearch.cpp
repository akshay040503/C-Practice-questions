#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> & v, int low, int high, int target){


    // range is invalid 
    if (low > high){
        return false;
    }

    // finding mid point
    int mid = ((high - low) / 2 + low );\

    if (v[mid] == target) {
        return true;
    }
        if (v[mid] > target) {
        return binarySearch(v, low, mid - 1,
                            target);
    }

    // If the middle element is smaller than
  	// target, search in the right half
    return binarySearch(v, mid + 1, high,
                        target);

    }

int main (){

    vector<int> v = {1, 5, 3, 2, 4, 9, 8, 11};\
    int target = 4;
    if (binarySearch(v, 0, v.size() - 1,target)) {
            cout << target << " found.";
    } else {
        cout << target << " NOT found.";
    }

    return 0;
}