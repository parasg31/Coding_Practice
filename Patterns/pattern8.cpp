//Full Pyramid problem
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }
        for(int star=0;star<=row;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}