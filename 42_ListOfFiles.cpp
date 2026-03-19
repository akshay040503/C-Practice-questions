#include <iostream>
#include <dirent.h>   // for directory handling

using namespace std;

int main() {
    DIR *dir;                  // pointer to directory
    struct dirent *entry;      // structure to store file info

    // Open current directory (you can change path)
    dir = opendir(".");

    // Check if directory opened successfully
    if (dir == NULL) {
        cout << "Error opening directory!" << endl;
        return 1;
    }

    cout << "Files in directory:\n";

    // Read directory entries one by one
    while ((entry = readdir(dir)) != NULL) {
        cout << entry->d_name << endl;
    }

    // Close directory
    closedir(dir);

    return 0;
}


// Control Flow of the Directory : 
// Start
//   ↓
// Declare variables
//   ↓
// Open directory
//   ↓
// Is directory NULL?
//   ├── Yes → Print error → End
//   └── No
//         ↓
//    Read first file
//         ↓
//    Is file NULL?
//         ├── Yes → Close dir → End
//         └── No
//               ↓
//         Print filename
//               ↓
//         Read next file
//               ↓
//         (Repeat loop)