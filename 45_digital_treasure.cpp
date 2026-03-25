#include <iostream>
using namespace std;


int sumOfDigits(int n){

    int sum = 0;
    while (n > 0 ) {
    sum += n % 10;
     n /= 10;
    }
    return sum;
    }

int productOfDigits(int n){

   int product = 0;
  while (n > 0 ) {
  product  *= n % 10;
   n /= 10;
}
  return product;
}
int main (){
    int n ; 
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter numbers; ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;

    cout<< "Tresure numbers are : ";


    for (int i = 0; i < n; i++) {
        int sum = sumOfDigits(arr[i]);
        int product = productOfDigits(arr[i]);

        if (sum % 3 == 0 && product % 2 == 0) {
            cout << arr[i] << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Total Treasure Numbers = " << count;



    return 0;
}


//🧩 Question: “Digital Treasure Chest”

// You found a treasure chest that opens only if a secret number rule is satisfied.

// You are given N integers.
// A number is called a Treasure Number if:

// The sum of its digits is divisible by 3
// The product of its digits is even

// Your task is to:

// Count how many Treasure Numbers exist in the list.
// Print those numbers.