#include<iostream>
using namespace std;
int main()
{
    int bin,dec,rem,i;
    cout<<"Enter the decimal number to be converted to binary: ";
    cin>>bin;
    i=bin;
    dec=0;
    while(bin>0)
    {
        rem=bin%2;
        cout<<rem;
        bin/=2;

    }
    cout<<"The binary form of "<<i<<" is = " <<rem<<endl;
    return 0;
}
