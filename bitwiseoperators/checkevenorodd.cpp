#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if( (n&1) == 0){
        cout << "Even number" << endl;
    }
    else{
        cout << "Odd number" << endl;
    }
}