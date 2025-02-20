#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}
void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 10;
    }
}
bool findTarget(int arr[], int size, int target)
{
    // //for checking from the back of the array
    // for(int i=size-1;i>=0;i--){
    //     if(arr[i]==target){
    //         return target;
    //     }
    // }
    // return false;
    // // transverse the entire array
    // for (int i = 0; i < size; i++){
    //   if (arr[i]==target)
    //     {
    //         return true;
    //     }
    // }
    // // agar aap yaha tk pohoch gye toh
    // // iska matlab poora loop chl chuka haiu
    // // element not found
    // return false;
}
int main()
{
    int arr[100];
    int size;
    // solve(arr, size);
    // print(arr, size);
    cout << "enter the number of the elements";
    cin >> size;
    cout << "enter the elements of the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "enter the value of the target" << endl;
    cin>>target;
    bool ans = findTarget(arr, size, target);
    cout << "ans: " << ans << endl;
}
