#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int matrixA[20][20];
    int matrixB[20][20];
    int matrixC[20][20];
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
     for( int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
        cout<<"Enter the numbers for B matrix "<<i<<endl;
        cin>>matrixB[i][j];

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
    cout<<"The elements of matrix B  are \n";
    for (int i=0;i<rows;i++)
    {
    for(int j=0;j<col;j++)
    {
      cout << matrixB[i][j]<<"   \t";

    }
    cout<<endl;
    }
    cout<<"The elements of matrix resultant  are \n";
    if(rows==col){
    for (int i=0;i<rows;i++)
    {
    for(int j=0;j<col;j++)
    {
        matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
      cout << matrixC[i][j]<<"   \t";

    }
    cout<<endl;
    }
    }
    else{
        cout<< "matrix addition is not possible";
    }
}
