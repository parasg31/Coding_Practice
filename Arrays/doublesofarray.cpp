#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the elements of your choice"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //printing the doubles
    cout<<"The doubles of the array is as follows"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr[j]*2<<" ";
    }
}