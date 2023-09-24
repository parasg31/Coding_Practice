#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector <int> arr{10,20,30,40,50,60,70};
    //for printing all the pairs
    //for iterating the outer loop
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
}