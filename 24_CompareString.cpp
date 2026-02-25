// Write a program to compare strings.
#include <iostream>
using namespace std;

void compareFunction(string str1, string str2){
    int x = str1.compare(str2);

    if (x != 0){

        cout << str1 << " is not equal to " << str2 << endl;

        if (x > 0) 
        cout << str1 << " greater than " << str2 << endl;
        
        else 
        cout << str2 << " greater than" << str1 << endl;
    } else 
    cout << str1 << " is equal to " << str2 << endl;

}



int main (){

 

    string str1 ("hello");
    string str2 ("HELLO");
    compareFunction(str1, str2);
   
    return 0;
}