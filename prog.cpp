#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter 3 numbers";
    cin >> a >> b >> c;
    if(a>=b && a>=c)
    cout << a << " is greater";
    if(b>=a && b>=c)
        cout << b << " is greater";
    else
        cout << c << " is greater";
    return 0;
}
