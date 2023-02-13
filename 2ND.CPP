#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a value: ";
    cin>>a;
    cout<<"enter b value: ";
    cin>>b;
    cout<<"a&b is : " << (a & b)<< endl;
    cout<<"a|b is : " << (a | b)<< endl;
    cout<<"a^b is : " << (a ^ b)<< endl;
    cout<< "~a is : " << (~a) << endl;
    cout<<"right shift of b << 1 : " << (b << 1) <<endl;
    cout<<"left shift of a >> 1 : " << (a >> 1) <<endl;
}

