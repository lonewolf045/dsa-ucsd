#include<iostream>
#include<vector>
using namespace std;

vector <long long> fibo(61 , -1);

long long Fib(long long n) {
    if(fibo[n] != -1)
        return fibo[n];
    if( n <= 1) {
        fibo[n] = n;
    } else {
        fibo[n] = (Fib(n-1) + Fib(n-2))%10;
    }
    return fibo[n];
}

int main() {
    long long n;
    cin>>n;
    int c = Fib(n % 60);
    int k = Fib((n+1) % 60);
    cout << (c*k) % 10;
    return 0;
}