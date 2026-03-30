#include <iostream>
#include <unordered_set>
using namespace std;

int digitalSquareSum(int n ){

    int sum = 0;
    while (n > 0){
        int digit = n % 10; // gives the last digit 
        sum += digit * digit; // make the square and also sum.
        n = n / 10; // give first digit

    }
    return sum;
}

bool isHappy(int n ){

    unordered_set<int> seen; // make a set = { 19}; put 19 into it 

    while (n != 1 && seen.count(n) == 0){  // check both the condtion if true. then check further.
        seen.insert(n);                     // insert that 19 into the set.
        n = digitalSquareSum(n);            // move to the digital sum function,.
    }
    return n ==1;
}

int main ()
{

    int n ; 
    cin >> n;

    if(isHappy(n))
        cout << "Happy Number";
    else 
        cout << "Not a happy Number";


}