#include<iostream>
using namespace std;
int main(){
int rows,col;
cout<<"Enter the number of rows: ";
cin>>rows;
cout<<"Enter the number of columns: ";
cin>>col;
int mat[rows][col];
for( int i=0; i<rows; i++)
{
for(int j=0; j<col; j++)
{
cout<<"Enter the numbers for  matrix "<<i<<endl;
cin>>mat[i][j];}
cout<<endl;
}
cout<<"The elements of matrix the  are \n";
for (int i=0;i<rows;i++){
for(int j=0;j<col;j++){
cout << mat[i][j]<<"   \t";}
cout<<endl;}
cout<<"The sum of each row is: "<<endl;
for(int i=0;i<rows;i++){
int sumrow=0;
for(int j=0;j<col;j++){
sumrow=sumrow+mat[i][j];
}
cout<<"Row "<<i+1<<":   "<<sumrow<<endl;
}
cout<<"The sum of each column is: "<<endl;
for(int j=0;j<col;j++){
int sumcol=0;
for(int i=0;i<rows;i++){
sumcol=sumcol+mat[i][j];
}
cout<<"column "<<j+1<<":  "<<sumcol<<endl;
}
}
