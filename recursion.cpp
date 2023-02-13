#include <iostream>
using namespace std;
int gcdrecursion(int a, int b) {
if (b == 0) return a;
return gcdrecursion(b, a % b);
}
int gcditerative(int a, int b) {
while (b != 0) {
int temp = b;
b = a % b;
a = temp;
}
return a;
}
int main() {
int a, b;
int choice;
cout << "Enter two numbers to find their GCD: ";
cin >> a >> b;
cout << "Choose an option to find GCD:" << endl;
cout << "1. With Using Recursion" << endl;
cout << "2. Without Using Recursion" << endl;
cin >> choice;
switch (choice) {
case 1:
cout << "The GCD of the numbers " << a << " and " << b << " is: " <<
gcdrecursion(a, b) << endl;
break;
case 2:
cout << "The GCD of the numbers " << a << " and " << b << " is: " <<
gcditerative(a, b) << endl;
break;
default:
cout << "Invalid choice" << endl;
}
}
