#include <bits/stdc++.h>
using namespace std;

// Interface equivalent pure abstract class
class I {
  public:
    virtual string getName() = 0;
};

// Class B which inherits I
class B : public I {
  public:
    string getName() {
        return "GFG";
    }
};

// Class C which inherits I
class C : public I {
  public:
    string getName() {
        return "GeeksforGeeks";
    }
};

int main() {
    B obj1;
    C obj2;
    I *ptr;

    // Assigning the address of obj1 to ptr
    ptr = &obj1;
    cout << ptr->getName() << endl;

    // Assigning the address of obj2 to ptr
    ptr = &obj2;
    cout << ptr->getName();
  
    return 0;
}