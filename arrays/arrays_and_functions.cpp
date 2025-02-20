#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}
void solve(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        num[i] = num[i] + 10;
    }
    return;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    print(arr, size);
}

// }
// int main(){
//     int arr[4]={0};
//     int size=4;
//     solve(arr,size);
//     for(int i=0;i<4;i++){
//         cout<< arr[i];
//     }
//     return 0;
// }