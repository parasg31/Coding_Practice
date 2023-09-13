#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of sides"<<endl;
    cin>>n;
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<n;cols++){
            cout<<"* ";
        }
        cout<<endl;
    }

}