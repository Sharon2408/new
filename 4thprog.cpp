#include <iostream>
using namespace std;
int main()
{
    string name;
    char type;
    string number;
    int calls;
    double b;
    cout<<"ENTER YOUR NAME: ";
    cin>> name;
    cout<<"ENTER YOUR CONNECTION TYPE (RESIDENCE (R) OR INDUSTRY(I)): ";
    cin>> type;
    cout<<"ENTER YOUR TELEPHONE NUMBER: ";
    cin>> number;
    cout<<"NUMBER OF CALLS MADE: ";
    cin>> calls;
    if(type=='R' || type=='r'){
        switch (calls){
case 1 ... 100:
    b=500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 101 ... 200:
    b=500+1.25*(calls-100);
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 201 ... 500:
    b=1.25*100+2.5*(calls-200)+500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 501 ... 1000:
    b=1.25*100+2.5*100+(4*(calls-300))+500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
default:
    cout<<"OUT OF BOUNDS";
}
}
else if(type=='I'|| type=='i'){
    switch(calls){
case 1 ... 100:
    b=1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 101 ... 400:
    b=1000+2.5*(calls-100);
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 401 ... 700:
    b=1000+(2.5*100)+(3.5*(calls-200));
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 701 ... 1000:
    b=1000+(2.5*100)+(3.5*100)+(5*(calls-300));
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 1001 ... 10000:
    b=1000+(2.5*100)+(3.5*100)+(7*(calls-400));
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
default:
    cout<<"OUT OF BOUNDS";


    }
}



}
