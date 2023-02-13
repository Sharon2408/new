#include<iostream>
using namespace std;
int main(){
cout<<"Enter the total numbers for the array: ";
int n,bin,low,high,mid,f=0;
cin>>n;
low=0;high=n;
int arr[n];
cout<<endl;
cout<<"Enter the elements : "<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"The elements of the array are: ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
cout << " Enter the value to be searched : " << endl;
cin >> bin;
while(low<=high){
mid=(low+high)/2;
if (arr[mid]==bin){
f=1;
break;
}
else if (arr[mid]>bin){
high=mid-1;
}
else{
low=mid +1;
}
}
if (f==1){
cout<<"the number is: /n"<<n;
}
else{
cout<<"the number is not in the array";
}
}
