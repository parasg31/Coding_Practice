#include<iostream>
using namespace std;

int main(){
    int num,arr[20];
    cout<<"Enter the Number of your choice"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    //printing the extreme
    int start=0;
    int end=num-1;
    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else {
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}