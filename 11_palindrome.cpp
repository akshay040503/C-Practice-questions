#include <iostream>
using namespace std;

int main() {
    int n=1221;
    int t = n;
    int rev = 0;
    
    // Calculate reverse number rev of a given number n
    while (t > 0) {
        int dig = t % 10;
        rev = rev * 10 + dig;
        t /= 10;
    }
    
    // Compare number n with reverse number rev 
    if (n==rev)
        cout << "Palindrome.";
    else
        cout << "Not Palindrome.";
    return 0;
}