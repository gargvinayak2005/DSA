#include <iostream>
using namespace std;

int singlenumber(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans ^= arr[i];  // XOR logic
    }
    return ans;
}

int main() {
    int n;
    cout << "Please enter the number of integers in the array: ";
    cin >> n;

    int arr[1000]; // assuming max 1000 elements; can increase if needed

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = singlenumber(arr, n);
    cout << "The single number is: " << result << endl;

    return 0;
}
