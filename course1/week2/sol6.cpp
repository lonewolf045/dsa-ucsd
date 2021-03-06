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
    //cout<<-1%60<<endl;
    int c = Fib((n +2) % 60) - 1;
    if (c < 0)
        c = 10 + c;
    cout<<c;
    return 0;
}