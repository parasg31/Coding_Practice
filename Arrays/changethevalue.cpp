#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter how many no you want in array"<<endl;
    cin>>n;
    //taking input from the user
    cout<<"Enter the Numbers of your choice"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //changing them to one
    for(int j=0;j<n;j++){
        arr[j]=1;
    }

    cout<<"Printing of the array"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}