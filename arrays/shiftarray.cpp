#include <iostream>
#define max 1000
using namespace std;
void shiftarray(int arr[], int n, int shift)
{
    int temp[max];
    for (int j = 0, i = n - shift; i < n; i++, j++) {
        temp[j] = arr[i];
    }
    for(int i=n-1;i>=shift;i--)
    {   
        arr[i]=arr[i-shift];
    }
    for(int i=0;i<shift;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    int n = 10;
    int arr[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int shift = 2;
    cout << "before shifting";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    shiftarray(arr, n, shift);
    cout << "after shifting";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
}
