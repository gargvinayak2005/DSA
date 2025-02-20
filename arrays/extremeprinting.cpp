#include<iostream>
using namespace std;
void extremeprinting(int arr[],int n){
    int i=0;//extremeleft
    int j=n-1;//extremeright
    while(i<=j){
        cout<<arr[i]<<" ";
        i++;
        if(j>i){
        cout<<arr[j]<<" ";
        j--;
    }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    extremeprinting(arr,size);
}
