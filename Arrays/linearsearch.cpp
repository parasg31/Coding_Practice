#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    //key not found 
    return false;
}

int main(){
    int arr[5]={1,5,6,8,9};
    int size;
    cout<<"Enter the element u want to search"<<endl;
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Number Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}