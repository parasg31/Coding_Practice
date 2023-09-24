#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> arr{0,1,1,0,0,1,1,1,0,0};
    int start=0;
    int end=arr.size() - 1;
    int i=0;

    //looping process
    while(i != end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    //printing the array
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
}