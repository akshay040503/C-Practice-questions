#include <iostream>
using namespace std;


int main (){

    // Taking the array size and the elements
    int n ;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: \n";
    for (int i = 0 ; i< n ; i++){

        cin >> arr[i];
    }

    // we don't know the max and min so let's initiallize this to 0;

    int min = arr[0];
    int max = arr[0];

    // compare with elements and find the max and min 
    for (int i = 1; i < n ; i++){

        if (arr[i] < min){
            min = arr[i];
        }

        if(arr[i] > max){
            max = arr[i];
        }

    }

    // Display Result 

    cout << "Minimum element: " << min << endl; 
    cout << "Maximum element: " << max << endl; 

    return 0;
}