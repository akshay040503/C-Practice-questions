#include <fstream>
#include <iostream>
using namespace std;

int main(){
    //using ofstream for output file operations.
    ofstream file;

    // Opening file "Gfg.txt" in write mode.
    file.open("Gfg.txt");

    // Check if the file was successfully created.
    if (!file.is_open())
    {
        cout << "Error in creating file!" << endl;
      
       // Return a non-zero value to indicate an error.
        return 1;
    }
    cout << "File created successfully." << endl;

    // Close the file to free up resources.
    file.close();
    return 0;
}

// control flow of the program : - 
// Program Start
//       ↓
// Create ofstream object
//       ↓
// Open file "Gfg.txt"
//       ↓
// Check if file opened
//       ↓
// If NOT opened → Print Error
//       ↓
// If opened → Print Success
//       ↓
// Close file
//       ↓
// Program End

