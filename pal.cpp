#include <iostream>
#include <string>
using namespace std;
int main() {
string alph;
cout << "Enter a string: ";
cin>>alph;
int n = alph.length();
int isPalindrome = 1;
for (int i = 0; i < n / 2; i++) {
if (alph[i] != alph[n - i - 1]) {
isPalindrome = 0;
break;
}
}
if (isPalindrome==1) {
cout << "The given string is a palindrome." << endl;
} else {
cout << "The given string is not a palindrome." << endl;
}
return 0;
}
