#include <iostream>
using namespace std;
int main()
{
    int target = 79;
    int rowsize = 3;
    int colsize = 4;
    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 55, 57, 59},
        {69, 72, 79, 89}};
    for (int r = 0; r < rowsize; r++)
    {
        for (int c = 0; c < colsize; c++)
        {
            if (target == arr[r][c])
            {
                cout << "target found"<<" at ["<< r <<"]["<<c<<"]";
            }
        }
    }
    return 0;
}