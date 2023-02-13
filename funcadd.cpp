#include <iostream>
using namespace std;
int add(int x, int y){
return x + y;
}
int subtract(int x, int y)
{
return x - y;
}
int multiply(int x, int y)
{
return x * y;
}
int divide(int x, int y)
{
return x / y;
}
int main()
{
int choice, x, y;
int a = 0;
while (a==0)
{
cout << "Menu:" << endl;
cout << "1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
cout << "4. Division" << endl;
cout<<  "5. Exit"<<endl;
cout << "Enter your choice: ";
cin >> choice;
cout << "Enter two numbers: ";
cin >> x >> y;
switch (choice)
{
case 1:
cout << "Result: " << add(x, y) << endl;
break;
case 2:
cout << "Result: " << subtract(x, y) << endl;
break;
case 3:
cout << "Result: " << multiply(x, y) << endl;
break;
case 4:
cout << "Result: " << divide(x, y) << endl;
break;
default:
cout << "Invalid choice" << endl;
}
}
return 0;
}

