#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin >> n1>>n2;
    int arr1[100];
    int arr2[100];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout<<endl;
    int n3 = n1+n2;
    int arr3[n3];
    int i,j,k;
    i = 0;
    j = 0;
    k = 0;
    while((i<n1) &&(j<n2)){
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j];
            j++;
        } else {
            arr3[k++]=arr1[i];
            i++;
        }
    }
    while(i!=n1){
        arr3[k++] = arr1[i];
        i++;
    }
    while(j!=n2){
        arr3[k++] = arr2[j];
        j++;
    }
    for (int z = 0; z < n3; z++) {
        cout << arr3[z] << " ";
    }
    return 0;
}
