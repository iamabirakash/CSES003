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
    int pos;
    cin >> pos;
    for (int i = pos-1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
