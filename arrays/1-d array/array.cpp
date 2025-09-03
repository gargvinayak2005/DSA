#include<iostream>
using namespace std;
void fun(int a[],int n){
    for (int i = 0; i < 0; i++)
    {
        cout<<a[i]<<endl;
    }
    
}
int main(){
    //static memory allocation of the array
    // int arr[5]={1,2,3,4,5};
    // dynamic memory allocation of the array
    int n;
    cin>>n;
    int *arr=new int[n];//each element would be zero or garbage
    fun(arr,5);    
}