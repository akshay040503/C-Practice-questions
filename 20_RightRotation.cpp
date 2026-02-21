// Write a program to print the Array After It is Right rotated k times.
#include <iostream>
using namespace std;

int main (){

    int n ,k;

    cout << "Enter the no of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }

     k = 2;

    for ( int i = 0 ; i < k ; i++ ){
        int temp = arr[n-1];
                    
        for(int j = n - 1;j > 0 ; j--){
            arr[j] = arr[j-1];

        }
        arr[0] = temp;
    }

    cout << "Array after right rotation: \n";
    for (int i =0 ; i < n ; i++){
        cout << arr[i] << " ";
    }


    return 0;
}