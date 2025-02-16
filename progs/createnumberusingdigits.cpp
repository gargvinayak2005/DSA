#include <iostream>
using namespace std;

int main()
{
    int n, digit, num = 0;
    cout << "enter the number of digit you want to insert";
    cin >> n;
    while (n > 0)
    {
        cout << "enter the digit";
        cin >> digit;
        num = num * 10 + digit;
        cout << "Number created so far " << num << endl;
        n--;
    }
}