#include<iostream>
#include<vector>
using namespace std;

vector <long long> fibo(61 , -1);

long long Fib(int n) {
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
    int n;
    cin>>n;
    cout<<Fib(n % 60);
    return 0;
}