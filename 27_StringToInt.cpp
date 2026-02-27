// write a program to convert string to integer.
#include <iostream>
using namespace std;

int main (){

    string str1 = "45";
    string str2 = "56";

    int myInt1 = stoi(str1);
    int myInt2 = stoi(str2);
    
    cout << "stoi(\"" << str1 << "\") is " << myInt1 << '\n';
    cout << "stoi(\"" << str2 << 
            "\") is " << myInt2 << '\n';
    
    
    return 0; 
}