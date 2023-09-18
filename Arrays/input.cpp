#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the elements for the Array"<<endl;
    //taking input in an array
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    //printing the array
    cout<<"Entered array is as follows"<<endl;
    for(int j=0;j<10;j++){
        
        cout<<arr[j]<<" ";
    }
}