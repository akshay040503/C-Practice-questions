// Write a program to check if Two Arrays are Equal or Not.

#include <iostream>
using namespace std; 

int main (){

    int n ;

    cout << "Enter size of an array: ";
    cin >>  n;

    int arr[n], arr1[n];

    //input the first array
    cout << "Enter the element of the first array: ";
    for (int i = 0; i < n ; i ++ ){

        cin >> arr[i];

    }
    // Input second array 
        //input the first array
    cout << "Enter the element of the second array: ";
    for (int i = 0; i < n ; i ++ ){

        cin >> arr1[i];

    }

    bool isEqual  = true;

    // compare
    for( int i = 0 ; i < n ; i++ )
    {
        if(arr[i] != arr1[i]){
            isEqual = false;  
            break;

        }
    }

    if (isEqual)
    cout << "Arrays are Equal: ";
    else 
    cout << "Arrays are not Equal";

    return 0;
}