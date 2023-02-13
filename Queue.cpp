#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
 void Insert() {
int val;
if (rear == n - 1)
cout<<"Queue is on Overflow"<<endl; else {
if (front == - 1)
front = 0;
cout<<"Insert the element in the queue : ";
cin>>val;
rear++;
queue[rear] = val;
} }
void Delete() {
if (front == - 1 || front > rear) {
cout<<"Queue is on Underflow ";
return ; } else {
cout<<"The Deleted element of queue is : "<< queue[front]<<endl ;
front++;; }
}
void Display() {
if (front == - 1)
cout<<"The Queue is empty"<<endl; else {
cout<<"The Elements of the queue are : "; for (int i = front; i <= rear; i++) cout<<queue[i]<<" ";
cout<<endl;

    } }
int main() { int c;
cout<<"1. To Insert element to queue"<<endl;
cout<<"2. To Delete element from queue"<<endl;
cout<<"3. To Display all the elements of queue"<<endl;
cout<<"4. To Exit"<<endl;
do {
cout<<"Enter your choice for operation : ";
cin>>c;
switch (c) {
case 1: Insert(); break;
case 2: Delete(); break;
case 3: Display();
break;
case 4: cout<<"Exit  Thank you"<<endl;
break;
default: cout<<"You have chose an Invalid choice"<<endl;
}
} while(c!=4); return 0;
}

