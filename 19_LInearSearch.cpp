#include <iostream>
using namespace std;

// function declaration 

int linearSearch(int arr[], int key, int n);

int main ()
{
    int arr[] = {23, 45, 64, 45, 67};
    int key = 64;

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = linearSearch(arr, key, n);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

int linearSearch(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;   // return index
        }
    }

    return -1;  // if not found
}
