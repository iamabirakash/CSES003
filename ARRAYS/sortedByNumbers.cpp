#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    int val;
    cin >> val;
    int pos;
    for (int i = 0; i < size; i++) {
        if(arr[i+1]>val){
            pos=i;
        }
    }
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos] = val;
    size++;
    cout << "Array after adding: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
