// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int pos,value;
    cin>>pos>>value;
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1] = value;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}