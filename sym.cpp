#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int matrixA[20][20];
    int rows,col;

    cout<<"************ADDITION OF MATRICES**********"<<endl;

    cout<<"Enter the total number of rows  you want : "<< endl;
    cin>>rows;
    cout<<"Enter the total number of  columns you want : "<< endl;
    cin>>col;
    for( int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
        cout<<"Enter the numbers for A matrix "<<i<<endl;
        cin>>matrixA[i][j];

        }
cout<<endl;
    }
    cout<<"The elements of matrix A  are \n";
    for (int i=0;i<rows;i++)
    {
    for(int j=0;j<col;j++)
    {
      cout << matrixA[i][j]<<"   \t";

    }
    cout<<endl;
    }
    if(matrixA[0][3]==martrixA[2][0] && matrixA[0][2]==matrixA[1][0] && matrixA)
}
