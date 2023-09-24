#include<iostream>
using namespace std;
#include<limits.h>

void findMaximum(int arr[][3],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    cout<<"The Maximum element in an 2d-Array is "<<maxi;
}

void findMinimum(int arr[][3],int rows,int cols){
    int mini=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    cout<<"The Minimum element in an 2d-Array is "<<mini;
}

int main(){
     int arr[3][3];
    int rows=3;
    int cols=3;
    //inserting the values in 2d array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }


    //printing the inserted values
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    findMaximum(arr,rows,cols);
    cout<<endl;
    findMinimum(arr,rows,cols);
}