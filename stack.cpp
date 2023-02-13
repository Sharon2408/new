#include <iostream>
using namespace std;
int stack[200], n=100, top=-1;

void push(int val) {
if(top>=n-1)
cout<<"Stack is on Overflow"<<endl;
else {
top++;
stack[top]=val;
}
}
void pop() {
if(top<=-1)
cout<<"Stack is on Underflow"<<endl;
else {
cout<<"The popped element is "<<stack[top]<<endl;
top--;
}
}
void display() {
if(top>=0) {
cout<<"Stack elements are ";
for(int i=top; i>=0; i--)
cout<<stack[i]<<" " ;
cout<<endl;
} else
cout<<"THE Stack is empty"<<endl;
}
int main() {
int c, val;
cout<<"1. Push in the stack"<<endl;
cout<<"2. Pop from the stack"<<endl;
cout<<"3. Display the stack"<<endl;
cout<<"4. Exit"<<endl;
do {
cout<<"Enter choice: ";
cin>>c;
switch(c) {
case 1:
cout<<"Enter the value to be pushed: ";
cin>>val;
push(val);
break;
case 2:
pop();
break;

case 3:
display();
break;

case 4:
cout<<"Exit"<<endl;
break;

default:
cout<<"Invalid Choice"<<endl;
}
}while(c!=4);
return 0;
}
