#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the no of Rows"<<endl;
    cin>>rows;
    cout<<"Enter the no of Columns"<<endl;
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}