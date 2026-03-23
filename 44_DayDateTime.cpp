// C++ Program to print current Day, Date and Time
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    // for time()
    time_t tt;

    // localtime()
    struct tm* ti;

    // Applying time()
    time(&tt);

    // Using localtime()
    ti = localtime(&tt);

    cout << "Current Day, Date and Time is = "
         << asctime(ti);

    return 0;
}