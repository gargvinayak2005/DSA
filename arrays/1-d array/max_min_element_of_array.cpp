#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[],int size){
    int maxAns=INT_MIN;
    for(int i=0;i<size;i++){
        maxAns=max(maxAns,arr[i]);
        // if(arr[i]>maxAns){
        //     maxAns=arr[i];
        
        // }
    }
    return maxAns;
}
int findMin(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        minAns=min(minAns,arr[i]);
        // if(arr[i]>minAns){
        //     minAns=arr[i];
        // }
    }
    return minAns;
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
    cout<<"max number is:"<<findMax(arr,size)<<endl;
    cout<<"min number is:"<<findMin(arr,size)<<endl;

}
