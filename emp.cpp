#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Employee {
int rollnum;
string name;
string department;
float salary;
};
void writeToFile(Employee employees[], int size) {
ofstream outfile;
outfile.open("Employee.dat", ios::binary);
outfile.write((char *) &size, sizeof(int));
outfile.write((char *) employees, size * sizeof(Employee));
outfile.close();
cout << "Data written to file successfully!" << endl;
}
void readFromFile() {
ifstream infile;
infile.open("Employee.dat", ios::binary);
int size;
infile.read((char *) &size, sizeof(int));
Employee *employees = new Employee[size];
infile.read((char *) employees, size * sizeof(Employee));
cout << "Employee Details:" ;
for (int i = 0; i < size; i++) {
Employee e = employees[i];
cout << "Roll number: " << e. rollnum << endl;
cout << "Name: " << e.name << endl;
cout << "Department: " << e.department << endl;
cout << "Salary: " << e.salary << endl;
cout << "Annual Income: " << e.salary * 12 << endl;
}
infile.close();
}
int main() {
int n;
cout << "Enter the number of employees: ";
cin >> n;
Employee *employees = new Employee[n];
for (int i = 0; i < n; i++) {
cout << "Enter details for employee " << i + 1 <<endl;
cout << "Roll number: ";
cin >> employees[i].rollnum;
cout << "Name: ";
cin >> employees[i].name;
cout << "Department: ";
cin >> employees[i].department;
cout << "Salary: ";
cin >> employees[i].salary;
cout << endl;
}
writeToFile(employees, n);
readFromFile();
return 0;
}
