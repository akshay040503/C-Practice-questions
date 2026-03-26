
#include <iostream>
using namespace std;


int main (){

    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0;i < n; i++)
    cin >> arr[i];

    cout << "Leaders numbers are: ";

    // main logic
    for (int i = 0; i < n ; i++){
        bool leader = true;

        for(int j = i + 1; j< n ;j++ ){
            
            if(arr[j] > arr[i]){
                leader = false; 
                break;
            }
        }
        if (leader)
        cout<< arr[i]<<" "; 
    }


    return 0;
}

// “The Leader Number Problem”

// In a kingdom, numbers stand in a line.
// A number is called a Leader if it is greater than all numbers to its right side.

// Your task is to:

// Find all Leader Numbers in the array.
// Print them in the same order they appear.
// Example

// Input

// Enter size: 6
// Enter numbers:
// 16 17 4 3 5 2

// Output

// Leader numbers are: 17 5 2