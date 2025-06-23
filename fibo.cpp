#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 1;
    }
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i=1;i<n;i++){
        a = b;
        b = c;
        c = a+b;
    }
    return c;
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout<<fibo(n);
}