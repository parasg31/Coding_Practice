#include<iostream>
using namespace std;

void findingRowwiseSum(int arr[][3],int rows,int cols){
    cout<<"Printing Row-Wise Sum"<<endl;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}


void findingColwiseSum(int arr[][3], int rows, int cols){
    cout<<"Printing Cols-wise Sum"<<endl;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}


bool findKey(int arr[][3],int rows,int cols,int keys){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(keys==arr[i][j]){
                return true;
            }
        }
    }
    return false;
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

    findingRowwiseSum(arr,rows,cols);

    findingColwiseSum(arr,rows,cols);

    cout<<"Key id Present or not"<<findKey(arr,rows,cols,5);
}