#include<iostream>
#include<vector>
using namespace std;

vector <long long> fibo(331 , -1);

long long Fib(int n) {
    if(fibo[n] != -1)
        return fibo[n];
    if( n <= 1) {
        fibo[n] = n;
    } else {
        fibo[n] = Fib(n-1) + Fib(n-2);
    }
    return fibo[n];
}

int main() {
    int n;
    cin>>n;
    // for(int i = 0; i <= 60 ; i++) {
    //     cout<<Fib(i)<< ' ' << Fib(i + 60)<<endl;
    // }
    // cout << Fib(n);
    // for(int i = 0; i < 46; i++) {
    //     cout<<fibo[i];
    // }
    cout<<Fib(n % 60);
    return 0;
}