#include <iostream>
using namespace std;
// void print(int arr[],int size){
//     //print array
//     arr[1]=50;
// }
void printzeroesandone(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    for (int i = 0; i < n; i++){
        int currElememt=arr[i];
        if(currElememt==0){
            zerocount++;
        }
        if (currElememt==1){
            onecount++;
        }
        
    }
    cout<<"Total ones in the array are"<<onecount<<endl;
    cout<<"Total zeroes in the array are"<<zerocount<<endl;
    
}
int main()
{
    // int arr[]={10,20,30};
    // int size=3;
    // print(arr,size);
    // int arr[10];

    // error
    // int brr[]

    // //specify the size of the array
    // int crr[]={10,20,30,40};

    // int drr[4]={0};
    // cout<< drr[0]<< endl;
    // cout<< crr[4]<< endl;
    // int arr[4];
    // fill(arr,arr+4,23);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;

    // input
    // int arr[5];
    // for (int index = 0; index < 5; index++)
    // {
    //     cout << "enter the value for box index:" << index << endl;
    //     cin >> arr[index];
    // }
   
   
    // //print
    // for( int index = 0; index<5; index++){
    //     cout << arr[index] <<" ";
    // }
    // //alternate print
    // for( int index = 0; index<5; index++){
    //     cout << index[arr] <<" ";
    // }
    // return 0;


    //for counting ones and zeroes
    int arr[100];
    int size;
     cout << "enter the number of the elements";
    cin >> size;
    cout << "enter the elements of the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printzeroesandone(arr,size);
}