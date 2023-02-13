#include <iostream>
#include <string>
using namespace std;
int main() {
int n;
cout << "Enter the total number of trainees :  ";
cin >> n;
string names[n];
string name;
for (int i = 0; i < n; i++) {
cout << "Enter name of trainee " << i + 1 << ": ";
cin >> names[i];
}
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (names[i] > names[j]) {
name = names[i];
names[i] = names[j];
names[j] = name;
}
}
}
cout << "Trainee names in alphabetical order: " <<endl;
for (int i = 0; i < n; i++) {
cout << names[i] << endl;
}
return 0;
}
