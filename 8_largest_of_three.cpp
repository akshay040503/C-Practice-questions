// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

   int a = 23 , b = 34, c = 90;

    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}