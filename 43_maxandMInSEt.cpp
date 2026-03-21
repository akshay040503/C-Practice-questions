// Write a Program to Find the Maximum and Minimum Elements in a Set.

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 5, 6, 8};

    // Accessing minimum and maximum element
    cout << "min: " << *s.begin() << endl;
    cout << "max: " << *prev(s.end());
    return 0;
}