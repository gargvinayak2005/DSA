#include <iostream>
using namespace std;

int main()
{
    // declaring a 2D array
    //  int arr[4][3];

    // initialisation
    int arr[3][2] = {
        {10, 20}, {30, 40}, {50, 60}};
    // cout << arr[0][0] << endl;

    // traverse the whole array
    int rowSize = 3;
    int colSize = 2;

    //diagonal matrix->square matrix
    // for(int i=0; i<rowSize; i++){
    //    cout << arr[i][i]<<" ";
    // }
    // row-wise
    //  for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    //  {
    //      for (int colIndex = 0; colIndex < colSize; colIndex++)
    //      {
    //          cout<<arr[rowIndex][colIndex]<<" ";
    //      }
    //      cout<<endl;
    //  }

    // square-matrix
    // for (int r = 0; r < rowSize; r++)
    // {
    //     for (int c = 0; c < colSize; c++)
    //     {
    //         cout << arr[c][r] << " ";
    //     }
    //     cout << endl;
    // }

    //collunm-wise
    // for(int c=0; c<colSize; c++){
    //     for(int r=0; r<rowSize; r++)
    // {
    //     cout<<arr[r][c]<<" ";
    // }
    // }


}