#include <iostream>
using namespace std;

long long fact(int n,int a){
    if(n==0){
        return a;
    } else {
        return fact(n-1,a*n);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n,1);
}