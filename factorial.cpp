// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
long long fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout<<fact(n);
}