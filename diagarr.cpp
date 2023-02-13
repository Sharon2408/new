#include<iostream>
using namespace std;
int main(){
int rows,col,ldiagsum=0,rdiagsum=0;
cout<<"Enter the number of rows: ";
cin>>rows;
cout<<"Enter the number of columns: ";
cin>>col;
int arr[rows][col];
cout<<"Enter the elements of the matrix: "<<endl;
for( int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
        cout<<"Enter the numbers for  matrix "<<i<<endl;
        cin>>arr[i][j];

        }
cout<<endl;
    }
    cout<<"The elements of matrix the  are \n";
    for (int i=0;i<rows;i++)
    {
    for(int j=0;j<col;j++)
    {
      cout << arr[i][j]<<"   \t";

    }
    cout<<endl;
    }
if(rows==col){
cout<<"It's a square matrix"<<endl;
}
else{
cout<<"It's not a square matrix";
}
for (int i = 0; i < rows; i++) {
ldiagsum += arr[i][i];
rdiagsum += arr[i][rows - i - 1];
}
cout << "Sum of the elements in the left diagonal: " <<
ldiagsum << endl;
cout << "Sum of the elements in the right diagonal: " <<
rdiagsum << endl;
}
