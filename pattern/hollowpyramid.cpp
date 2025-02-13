#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
        cout<<" ";
        }
        //stars
        for(int j=0;j<i+1;j++)
        {
            if(j==0|| j==i)
            {
              cout<<"* ";
            } 
            else
            {
                //for every col between first and last
                //collunm, print space
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}