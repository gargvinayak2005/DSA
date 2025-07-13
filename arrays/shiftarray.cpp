#include <iostream>
using namespace std;

// Function to right shift the array by 'shift' positions
void shiftarray(int arr[], int n, int shift)
{
    shift = shift % n;  // Ensure shift is within bounds of array size
    if (shift == 0) return;  // No need to shift if shift is 0

    int temp[shift];  // Temporary array to store the last 'shift' elements

    // Step 1: Store the last 'shift' elements from the original array into temp
    for (int i = 0; i < shift; i++)
    {                                                   
        temp[i] = arr[n - shift + i];
    }

    // Step 2: Shift the remaining elements to the right by 'shift' positions
    for (int i = n - 1; i >= shift; i--)
    {
        arr[i] = arr[i - shift];
    }

    // Step 3: Copy the saved elements from temp back to the front of the array
    for (int i = 0; i < shift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n = 10;
    int arr[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};  // Initial array
    int shift = 2;

    cout << "Before shifting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    shiftarray(arr, n, shift);  // Perform the shift

    cout << "\nAfter shifting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
