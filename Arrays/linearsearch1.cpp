#include<iostream>
using namespace std;

// function declaration for the index finding
int findIndex(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            return i;
        }
        // else {
        //     return -1;
        // }
    }
    return -1;
}


int main(){
    int arr[200],n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Number u want to find Index for"<<endl;
    int x;
    cin>>x;
    int index=findIndex(arr,n,x);
    cout<<"Index is as Follows "<<index<<endl;
}