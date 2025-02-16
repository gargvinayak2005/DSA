#include <iostream>
using namespace std;
int countsetbit(int n)
{
    // int count=0;
    // while(n>0){
    //     if(n%2==1){
    //         count++;
    //         n=n/2;
    //     }
    // }
    // return count;
    
    
    //bitwise method
    int count=0;
    while (n)
    {
        if((n&1)){
            count++;
        }
        n>>=1;
    }
    return count;    
}
int main()
{
    int n;
    cin >> n;
    cout<<countsetbit(n);
}