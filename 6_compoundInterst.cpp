// find the compound Interest

#include <bits/stdc++.h>
using namespace std;

int main (){

    double principal = 10000 , rate = 4, time = 5 ;

    // formula to calculate compoundInterest 
     double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    cout << "The compound Interest :" << CI ;

    return 0;
}
