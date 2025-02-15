#include<iostream>
using namespace std;
void digitsofint(int n)
{
     while(n>0){
        cout<<n%10;
        n=n/10;
        cout<<endl;
     }
}
int main(){
    int n;
    cout << "enter the integer" ;
    cin>>n;
    digitsofint(n);
}