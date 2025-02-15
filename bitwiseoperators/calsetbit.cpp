#include<iostream>
using namespace std;
int main(){
    int n,setbit=0;
    cin>>n;
    for(int i=n;i!=0;i>>=1)
    {
        if(i&1)
        {
            setbit++;
        }
    }
    cout<<setbit;
}