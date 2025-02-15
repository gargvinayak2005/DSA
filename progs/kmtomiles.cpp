#include<iostream>
using namespace std;
float kmtomiles(float km){
    float _1kmmile=0.621371;
    float miles = km * _1kmmile;
    return miles;
}
int main(){
    float km;
    cout<<"Tell me km";
    cin>>km;
    cout<<"Miles="<<kmtomiles(km);

}