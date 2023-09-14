// Hollow rectangle
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n;col++){
//             if((row==0 || row==n-1) || (col==0 || col==n-1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

    for(int row=0;row<n;row++){
        if(row==0 || row==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int i=0;i<n-2;i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
 }

    