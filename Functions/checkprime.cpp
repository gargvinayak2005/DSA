#include<iostream>
using namespace std;
bool checkprime(int n){
    int i=2;
    for(i=2;i<(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(checkprime(n)==true){
        cout<<"Number entered is prime";
    }
    else{
        cout<<"number entered is not prime";
    }
}