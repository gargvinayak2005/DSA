#define pi 3.14159265359
#include<iostream>
using namespace std;
void displayareaofcircle(float n){
    cout << pi * n * n;
}
int main(){
    float n;
    cout << "enter the radius of the circle";
    cin >> n;
    displayareaofcircle(n);
}