#include <iostream>
using namespace std;
struct node {
int data;
node *next;

};
class LinkedList {
private:
node *head;
public:
LinkedList() { head = NULL; }
void insertAtBeginning(int value) {
node *temp = new node();
temp->data = value;
temp->next = head;
head = temp;
}
void deleteNode(int value) {
node *temp = head, *prev = NULL;
if (temp != NULL && temp->data == value) {
head = temp->next;
delete temp;
return;
}
while (temp != NULL && temp->data != value) {
prev = temp;
temp = temp->next;
}
if (temp == NULL)
return;
prev->next = temp->next;
delete temp;
}
bool searchNode(int value) {
node *temp = head;
while (temp != NULL) {
if (temp->data == value)
return true;
temp = temp->next;
}
return false;
}

void printList() {
node *temp = head;
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next;
}
}
};
int main() {
LinkedList linkedList;
linkedList.insertAtBeginning(34);
linkedList.insertAtBeginning(45);
linkedList.insertAtBeginning(56);
linkedList.insertAtBeginning(99);
linkedList.insertAtBeginning(87);
linkedList.insertAtBeginning(78);
linkedList.insertAtBeginning(33);
linkedList.printList();
cout << endl;
linkedList.deleteNode(99);
linkedList.printList();
cout << endl;
cout << linkedList.searchNode(45) << endl;
cout << linkedList.searchNode(80) << endl;
return 0;
}
