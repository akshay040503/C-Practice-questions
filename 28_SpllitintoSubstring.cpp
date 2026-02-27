//C++ Program to Split a String Into a Number of Sub-Strings

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void simple_tokenizer (string s ){

    stringstream ss(s); // It is a class from the <sstream> library
    string word;        // It will store one word at a time.
    while (ss >> word){
        cout << word << endl;
    }

}
int main (int argc, char const* argv[]){

    string a = "My name is Akshay Kumar Sahu !";
    simple_tokenizer(a);
    cout << endl;
    

    return 0;
}