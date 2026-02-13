// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

    int num;

    cout<< "Enter a Number:";
    cin>> num;

    if( num % 2 == 0 ){
        cout<< num << " is an even number "; 
    }else {
        cout<< num <<" is not an even number";
    }

    return 0;
}