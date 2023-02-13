#include <iostream>
using namespace std;
int main()
{
    int code;
    string name;
    char dep;
    double pay,bonus,incent,gp;
    cout<<"Enter employee ID : ";
    cin>>code;
    cout<<"Enter employee Name : ";
    cin>>name;
    cout<<"Enter employee Department M for (Marketing) , H for (HR) and A for (Administration): ";
    cin>>dep;
    cout<<"Enter employee Basic Pay : ";
    cin>>pay;
    cout<<"*******************GROSS PAY OF EMPLOYEE**********************"<<endl;

    if(dep=='M'|| dep=='H' && pay>20000){
        bonus = pay*0.25;
        incent = pay*0.15;
        gp=pay+bonus+incent;
        cout<<"Your bonus is : " << bonus << endl;
        cout<< "Your incentive is : " << incent<<endl;
        cout<<"Your Gross Pay (Total Salary) is : " << gp;
}
 else if(dep=='M'|| dep=='H' && pay>10000){
        bonus=0.15*pay;
        incent=0.10*pay;
        gp=pay+bonus+incent;
        cout<<"Your bonus is : " << bonus << endl;
        cout<< "Your incentive is : " << incent<<endl;
        cout<<"Your Gross Pay (Total Salary) is : " << gp;
}

 else if(dep=='M'|| dep=='H' && pay<=10000){
    bonus=1000;
    gp=pay+bonus;
    cout<<"Your bonus is : " << bonus<<endl;
    cout<< "you have no incentive"<<endl;
    cout<<"Your Gross Pay (Total Salary) is : " << gp;

}
 else if(dep=='A'){
        incent=3000;
        gp=pay+incent;
        cout<<"You have no Bonus"<<endl;
         cout<<"Your incentive is : " << incent<<endl;
         cout<<"Your Gross Pay (Total Salary) is : " << gp;



}
else
            cout<<"INVALID";


}
