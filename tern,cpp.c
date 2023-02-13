#include <iostream>
using namespace std;
int main()
{
    string name;
    char gender;
    double percentage;
    cout <<"Enter your name";
    cin>> name;
    cout<<"Enter your gender";
    cin>> gender;
    cout<<"Enter your percentage";
    cin>> percentage;



    (percentage>85 && gender=='M' || gender=='m') || (percentage>60 && gender=='F' || gender=='f') ? cout<<"You are appointed for office work"
    : cout<<"You are appointed for site work";




    return 0;
}



