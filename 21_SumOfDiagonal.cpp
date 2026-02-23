// Sum of diagonal of given matrix
#include <iostream>
using namespace std;
const int MAX = 100;

void printDiagonalSums(int mat[][MAX], int n){
    int principal = 0, secondary = 0;
    for (int i = 0; i < n ; i++ ){

        principal += mat[i][i];
        secondary += mat[i][n - i -1];
    }


    cout << "Principal diagonal: "<< principal << endl;
    cout << "Secondary Diagonal: "<< secondary << endl;
}
int main (){

    int a[][MAX] = {{1,2,3,4},
                     {1,1,2,3},
                     {4,6,7,8},
                     {1,2,1,1,}};

        
    printDiagonalSums(a,4);
    return 0;
}