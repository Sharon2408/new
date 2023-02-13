#include<iostream>
using namespace std;
int main(){
int rows,col,sym=0;
cout<<"Enter the number of rows: ";
cin>>rows;
cout<<"Enter the number of columns: ";
cin>>col;
int arr[rows][col];
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

for (int i=0;i<rows;i++)
{
for(int j=0;j<col;j++)
{
if (arr[i][j]!=arr[j][i])
sym = 1;
}
}
if(sym==0){
cout<<"Its symmetric";
}
else
{
 cout<<"Its not symmetric";


}
}




